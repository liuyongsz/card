package com.tcg.utils;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import org.apache.commons.lang3.StringUtils;
import org.apache.poi.ss.usermodel.CellType;
import org.apache.poi.xssf.usermodel.XSSFCell;
import org.apache.poi.xssf.usermodel.XSSFRow;
import org.apache.poi.xssf.usermodel.XSSFSheet;

import com.tcg.config.Condition;
import com.tcg.log.Log;

public class ExcelUtil {

    public static Map<Integer, Object> fillData(Map<Integer, Object> data, XSSFSheet sheet, String className, boolean bLowerCase) throws Exception {
        if (data == null) {
            data = new HashMap<Integer, Object>();
        }
        int rowIndex = 0;
        short i = 0;
        String fieldName = null;
        Set<String> warnField = new HashSet<String>();
        try {
            Class<?> clz = Class.forName(className);

            int firstRowNum = sheet.getFirstRowNum();
            int lastRowNum = sheet.getLastRowNum();

            XSSFRow row = sheet.getRow(firstRowNum); // 第1行开始是字段名，取出生成VO
            XSSFRow typerow = sheet.getRow(firstRowNum + 1); // 第2行开始是字段类型

            short from = row.getFirstCellNum();
            short to = row.getLastCellNum();

            for (rowIndex = firstRowNum + 3; rowIndex <= lastRowNum; rowIndex++) {
                XSSFRow datarow = sheet.getRow(rowIndex); // 第4行开始是真实的数据，从excel的格子类型来确定数据类型

                // 默认数据行第一列数据为key
                // XSSFCell firstDataCell=
                if (typerow == null || datarow == null) {
                    break; // 没数据了
                }

                Object cellValue = getCellValue(typerow.getCell(from), datarow.getCell(from));
                if (cellValue == null || cellValue.equals("") || cellValue.equals(0)) {
                    break; // 没数据了
                }
                
                int id = (Integer)cellValue;

                Object obj = data.get(id);
                if (obj == null) {
                    obj = clz.newInstance();
                }

                for (i = from; i <= to; i++) {
                    try {
                        XSSFCell cell = row.getCell(i);
                        XSSFCell typeCell = typerow.getCell(i);
                        XSSFCell dataCell = datarow.getCell(i);
                        if (cell == null || cell.getStringCellValue() == null || cell.getStringCellValue().equals("")) {
                            break; // 没数据了
                        }
                        fieldName = cell.getStringCellValue().trim();
                        if (bLowerCase) fieldName = fieldName.toLowerCase();
                        if (!fieldName.startsWith("//") && !fieldName.startsWith("##")) {
                            if (fieldName.startsWith("**")) {
                                fieldName = fieldName.substring(2);
                            }
                            Field field;
                            try {
                                field = clz.getDeclaredField(fieldName);
                            } catch (NoSuchFieldException e) {
                                if (!warnField.contains(fieldName)) {
                                    warnField.add(fieldName);
                                    Log.warn("className:" + className + ", no such field: " + fieldName);
                                }
                                continue;
                            }

                            field.setAccessible(true);

                            Object value = getCellValue(typeCell, dataCell);

                            field.set(obj, value);

                        }
                    } catch (Exception e) {
                        Log.info(rowIndex + " - " + i);
                        throw e;
                    }
                }

                Object value = data.put(id, obj);
                if (value != null) {
                	Log.warn(id + " is not unique in " + className);
                }
            }
        } catch (Exception e) {
            throw new Exception("className:" + className + ", row: " + (rowIndex + 1) + ", col: " + i + ", fieldName: " + fieldName, e);
        }

        return data;
    }

    private static Object getCellValue(XSSFCell typeCell, XSSFCell dataCell) {
        String type = typeCell.getStringCellValue().trim();
        if (type == null || type.equals("")) {
            return null;
        }

        if (type.equalsIgnoreCase("date")) {
            if (dataCell == null) {
                return null;
            }
            /*
             * if(dataCell.getCellType() == HSSFCell.CELL_TYPE_NUMERIC){
			 * if(HSSFDateUtil.isCellDateFormatted(dataCell)){ return
			 * dataCell.getDateCellValue(); } }
			 */

            return dataCell.getDateCellValue();
        }

        if (type.equalsIgnoreCase("string")) {
            if (dataCell == null) {
                return "";
            }
            dataCell.setCellType(CellType.STRING);
            return dataCell.getStringCellValue();
        }

        if (type.equalsIgnoreCase("boolean")) {
            if (dataCell == null) {
                return false;
            }

            try {
                dataCell.setCellType(CellType.BOOLEAN);
                return dataCell.getBooleanCellValue();
            } catch (Exception e) {
                dataCell.setCellType(CellType.NUMERIC);
                int value = (int) dataCell.getNumericCellValue();
                return value == 0 ? false : true;
            }
        }

        if (type.equalsIgnoreCase("int")) {
            if (dataCell == null) {
                return 0;
            }
            if (dataCell.getCellTypeEnum() == CellType.STRING) {
                return Integer.parseInt(dataCell.getStringCellValue());
            }
            dataCell.setCellType(CellType.NUMERIC);
            return (int) dataCell.getNumericCellValue();
        }
        if (type.equalsIgnoreCase("float")) {
            if (dataCell == null) {
                return 0;
            }
            dataCell.setCellType(CellType.NUMERIC);
            return (float) dataCell.getNumericCellValue();
        }

        if (type.equalsIgnoreCase("long")) {
            if (dataCell == null) {
                return 0;
            }
            dataCell.setCellType(CellType.NUMERIC);
            return (long) dataCell.getNumericCellValue();
        }
        
        if (type.equalsIgnoreCase("list")) {
            if (dataCell == null) {
                return null;
            }
            dataCell.setCellType(CellType.STRING);
            String value= dataCell.getStringCellValue();
            if (StringUtils.isEmpty(value)){
            	return null;
            }
         
            String[] datas = value.split("\\;");
            
            List<Integer> list = new ArrayList<Integer>();
            for(String data : datas){
            	list.add(Integer.parseInt(data));
            }
            return list;
        }
        
        if (type.equalsIgnoreCase("list<condition>")) {
            if (dataCell == null) {
                return null;
            }
            dataCell.setCellType(CellType.STRING);
            String value= dataCell.getStringCellValue();
            if (StringUtils.isEmpty(value)){
            	return null;
            }
         
            String[] datas = value.split("\\;");
            
            List<Condition> list = new ArrayList<Condition>();
            for(String data : datas){
            	String[] kv = data.split("\\:");
            	Condition c = new Condition();
            	c.setKey(Integer.parseInt(kv[0]));
            	c.setValue(Integer.parseInt(kv[1]));
            	list.add(c);
            }
            return list;
        }
        
        if (type.equalsIgnoreCase("set")) {
            if (dataCell == null) {
                return null;
            }
            dataCell.setCellType(CellType.STRING);
            String value= dataCell.getStringCellValue();
            if (StringUtils.isEmpty(value)){
            	return null;
            }
         
            String[] datas = value.split("\\;");
            
            Set<Integer> set = new HashSet<Integer>();
            for(String data : datas){
            	set.add(Integer.parseInt(data));
            }
            return set;
        }

        return null;
    }
}
