package com.yeayoo.data.excel;

import juan.util.PropertyUtil;

public class DataConfiger {

    public  static PropertyUtil configer = new PropertyUtil("data");


    public static String getSourcePath(){
        return configer.getProperties("source_path");
    }
    public static String getTargetPath(){
        return configer.getProperties("target_path");
    }
    public static String getPackage(){
        return  configer.getProperties("package");
    }
    public static String getFilter(){
        return  configer.getProperties("filter");
    }

}
