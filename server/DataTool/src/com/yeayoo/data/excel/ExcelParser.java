package com.yeayoo.data.excel;

import com.yeayoo.data.util.BuilderUtil;
import com.yeayoo.runtime.resource.AResource;
import com.yeayoo.view.View4J;
import com.yeayoo.view.context.IContext;
import com.yeayoo.view.context.impl.InnerContextImpl;
import org.apache.poi.hssf.usermodel.HSSFDateUtil;
import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.xssf.usermodel.XSSFCell;
import org.apache.poi.xssf.usermodel.XSSFRow;
import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.reflect.Field;
import java.util.*;


public class ExcelParser {
    private static Map<String, String> comments = new HashMap<>();

    private static List<String> list;


    public static void main(String[] args) throws Exception{
        String filterStr = DataConfiger.getFilter();
        list = new ArrayList<String>();
        String[] filter = filterStr.split("\\;");
        list = Arrays.asList(filter);
        ExcelParser ep = new ExcelParser();
        ep.parse(DataConfiger.getSourcePath(),DataConfiger.getPackage());
    }

    public void parse(String path, String packageName) throws Exception{
        File dir = new File(path);
        if (!dir.isDirectory()){
            System.err.println("请正确填写正确的文件目录！");
            return;
        }
        File[] files = dir.listFiles();
        for(File file:files){
            parse(path,packageName,file);
        }
        System.out.println("解析结束");
    }

    private void parse(String path, String packageName,File file) throws IOException{

        if (file.isDirectory()){
            if(file.getPath().contains("\\client")){
                return;
            }
            File[] files = file.listFiles();
            for (File filel:files){
                parse(path, packageName, filel);
            }
            return;
        }
        String fileType = BuilderUtil.getLastName(file.getName()).trim();

        if (!fileType.equals("xlsx") && !fileType.equals("xls")&& !fileType.equals("xlsm"))
            return;

        String className = BuilderUtil.getFirstName(file.getName()).trim();
        System.out.println(className);
        if (ExcelParser.list.indexOf(className)!=-1)
            return;

        className = BuilderUtil.getFirstUpper(className);

        XSSFWorkbook xwb = new XSSFWorkbook(new FileInputStream(file));

        XSSFSheet sheet = xwb.getSheetAt(0);
        if (sheet == null)
        {
            throw  new IllegalAccessError("excel file cant found sheet");
        }
        Map<String, String> fields = getFields(sheet);
        buildVO(path,packageName, className, fields);


    }

    private static Map<String, String> getFields(XSSFSheet sheet){
        Map<String, String> fields = new HashMap<>();

        int firstRowNum = sheet.getFirstRowNum();

        XSSFRow row =  sheet.getRow(firstRowNum);
        XSSFRow datarow =  sheet.getRow(firstRowNum + 1);
        XSSFRow commentrow = sheet.getRow(firstRowNum + 2);

        short from =  row.getFirstCellNum();
        short to =  row.getLastCellNum();

        for (short i = from; i<=to; i++){
            XSSFCell cell = row.getCell(i);
            if (cell == null || datarow.getCell(i) == null){
                continue;
            }

            String fieldName =  cell.getStringCellValue().trim().toLowerCase();
            if (!fieldName.startsWith("//") && !fieldName.startsWith("##")){
                if (fieldName.startsWith("**")){
                    fieldName = fieldName.substring(2);
                }

                String typeName = getCellType(datarow.getCell(i).getStringCellValue());
                fields.put(fieldName, typeName);

                String commentValue =  commentrow.getCell(i).getStringCellValue();
                comments.put(fieldName, commentValue);
            }

        }

        return fields;

    }

    private static String getCellValue(Cell cell, String type){

        try {
           if (type == null || type.equals(""))
               return  cell.getStringCellValue();
           if (type.equalsIgnoreCase("string"))
               return cell.getStringCellValue();
           if (type.equalsIgnoreCase("int"))
               return cell.getNumericCellValue()+"";
           if (type.equalsIgnoreCase("float"))
               return cell.getNumericCellValue()+"";
           if (type.equalsIgnoreCase("long"))
               return cell.getNumericCellValue()+"";
           if (type.equalsIgnoreCase("boolean"))
               return cell.getBooleanCellValue()+"";
           if (type.equalsIgnoreCase("date"))
               return cell.getDateCellValue().toString();
            if (type.equalsIgnoreCase("list"))
                return cell.getStringCellValue();
            if (type.equalsIgnoreCase("list<condition>"))
                return cell.getStringCellValue();
            if (type.equalsIgnoreCase("set"))
                return cell.getStringCellValue();

        } catch (Exception e) {
            e.printStackTrace();
        }

        return  type;
    }
    private static String getCellType(String type){
        try {
            if (type == null || type.equals(""))
                return "String";
            if (type.equalsIgnoreCase("string"))
                return "String";
            if (type.equalsIgnoreCase("int"))
                return "int";
            if (type.equalsIgnoreCase("float"))
                return "float";
            if (type.equalsIgnoreCase("long"))
                return "long";
            if (type.equalsIgnoreCase("boolean"))
                return "boolean";
            if (type.equalsIgnoreCase("date"))
                return "java.util.Date";
            if (type.equalsIgnoreCase("list"))
                return "java.util.List<Integer>";
            if (type.equalsIgnoreCase("list<condition>"))
                return "java.util.List<com.tcg.config.Condition>";
            if (type.equalsIgnoreCase("set"))
                return "java.util.Set<Integer>";

        } catch (Exception e) {
            e.printStackTrace();
        }

        return  type;
    }

    private static String getCellType(XSSFCell dataCell){
        int type = dataCell.getCellType();
        String typeName = "";
        switch (type){
            case XSSFCell.CELL_TYPE_BOOLEAN:
                typeName = "boolean";
                break;
            case XSSFCell.CELL_TYPE_NUMERIC:
                typeName = "int";
                break;
            case XSSFCell.CELL_TYPE_FORMULA:
                if (HSSFDateUtil.isCellDateFormatted(dataCell))
                    typeName =  "java.util.Date";
                else
                    typeName = "int";
                break;
            case XSSFCell.CELL_TYPE_STRING:
                typeName = "String";
                break;
            default:
                typeName = "String";
        }
        return typeName;
    }

    private void buildVO(String path, String packageName, String className, Map<String, String>fields){
        try {
            File file = null;
            String dirPath = DataConfiger.getTargetPath() +packageName.replaceAll("\\.","\\/");
            file =  new File(dirPath);
            file.mkdirs();
            file = new File(dirPath + "/" + BuilderUtil.getFirstUpper(className) + "Data.java");

            //代码输出到文件
            View4J v = new View4J();
            IContext context = new InnerContextImpl();
            context.put("BuilderUtil", BuilderUtil.class);
            context.put("packageName", packageName);
            context.put("className", className);
            context.put("fields", fields);
            context.put("comments", comments);

            AResource template = v.getTemplate("vo.vm");
            v.mergeTemplate(template, context, new FileOutputStream(file));

        }catch (Exception e)
        {

        }
    }



}
