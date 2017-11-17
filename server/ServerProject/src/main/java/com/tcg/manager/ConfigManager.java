package com.tcg.manager;

import java.io.File;
import java.io.FileInputStream;
import java.util.*;

import com.tcg.data.BadWordsData;
import org.apache.commons.lang3.ArrayUtils;
import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.tcg.config.ExcelConfig;
import com.tcg.log.Log;
import com.tcg.utils.ExcelUtil;
import com.tcg.utils.StringUtil;

public class ConfigManager implements IManager {

	private ClassPathXmlApplicationContext context;
	private Map<String, Map<Integer, Object>> configMap = new HashMap<String, Map<Integer, Object>>();
	private ExcelConfig excelConfig;
	
	private static ConfigManager instance = new ConfigManager();
	private XSSFWorkbook xwb;
	
	public static ConfigManager getInstance() {  
        return instance;  
    }  
	
	public void init() {
		context = new ClassPathXmlApplicationContext("spring.xml");
		excelConfig = getBean(ExcelConfig.class);
		try {
			initWithExcel(excelConfig.getPath(), excelConfig.getPackageName(), null);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void shutdown() {
		
	}
	
	public Object getBean(String beanName){
		return context.getBean(beanName);
	}
	
    public <T> T getBean(Class<T> object) {
        return context.getBean(object);
    }
	
    @SuppressWarnings("unchecked")
	public <T> T getConfig(int key,Class<T> clz) {
        Map<Integer, Object> obj = configMap.get(clz.getName());
        if (obj != null) {
            return (T)obj.get(key);
        }
        return null;
    }
    
    @SuppressWarnings("unchecked")
    public <T> Map<Integer, T> getConfig(Class<T> clz) {
        Map<Integer, T> obj = (Map<Integer, T>) configMap.get(clz.getName());

        return obj;
    }
	
    public void initWithExcel(String path, String packageName, String[] filterNames) throws Exception {
        File[] files;
        if (filterNames != null && filterNames.length > 0) {
            files = new File[filterNames.length];
            for (int i = 0; i < filterNames.length; i++) {
                String fileName = filterNames[i];
                files[i] = new File(path + fileName);
            }
        } else {
            File dir = new File(path);
            if (!dir.isDirectory()) {
                Log.warn("请正确填写正确的文件目录！");
                return;
            }
            files = dir.listFiles();
        }
        for (File file : files) {
            initWithExcel(packageName, filterNames, file);
        }
    }

    private void initWithExcel(String packageName, String[] filterNames, File file) throws Exception {
        if (!file.exists()) {
            return;
        }
        if (file.isDirectory()) {
            if (file.getPath().contains("\\client")) {
                return;
            }
            File[] files = file.listFiles();
            for (File file1 : files) {
                initWithExcel(packageName, filterNames, file1);
            }
            return;
        }
        String extName = StringUtil.getLastName(file.getName()).trim();
        if (!extName.toLowerCase().equals("xlsm"))
            return;
        String className = StringUtil.getFirstName(file.getName()).trim();
        if (excelConfig.getFilter().indexOf(className)!=-1){
        	return;
        }
        if (filterNames != null && filterNames.length > 0 && ArrayUtils.indexOf(filterNames, className) == -1) {
            return;
        }
        className = packageName + "." + StringUtil.getFirstUpper(className) + "Data";
        Log.info(className);

        FileInputStream fis = new FileInputStream(file);
        xwb = new XSSFWorkbook(fis);

        XSSFSheet sheet = xwb.getSheetAt(0);
        if (sheet == null) {
            throw new IllegalAccessError("excel file can't found sheet ！");
        }

        configMap.put(className, ExcelUtil.fillData(configMap.get(className), sheet, className, true));
        fis.close();
    }

    public String getHashKey(Set<String> hasdKeys){

	    String keyStr = "";
	    int i = 1;
	    while (true){
            keyStr = String.valueOf(i);
            if (!hasdKeys.contains(keyStr)){
                return keyStr;
            }
            i++;
        }
    }

    //是否有脏话
    public boolean checkHasBadWords(String message){

        Map<Integer,BadWordsData> badWordMap = getConfig(BadWordsData.class);
        Collection<BadWordsData> collection = badWordMap.values();
        Iterator<BadWordsData> iterator = collection.iterator();
        while (iterator.hasNext()){
            BadWordsData badWord = iterator.next();
            String word = badWord.getWord();
            if (message.indexOf(word) != -1){
                return true;
            }
        }

        return false;
    }



}
