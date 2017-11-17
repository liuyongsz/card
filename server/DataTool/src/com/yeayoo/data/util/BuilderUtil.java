package com.yeayoo.data.util;

public class BuilderUtil {

    public static String getFirstName(String name){
        int index = name.lastIndexOf(".");
        return name.substring(0, index);
    }

    public static String getLastName(String name){
        int index = name.lastIndexOf(".");

        return name.substring(index+1);
    }

    public static String getFirstUpper(String lower){
        String upper ="";
        upper = lower.substring(0,1).toUpperCase().concat(lower.substring(1));

        if(upper.indexOf(" ")>=0){
            upper = upper.substring(0, upper.indexOf("_")).concat(getFirstUpper(upper.substring(upper.indexOf("_")+1,upper.length())));
        }

        return upper;

    }

    public static String clearLine(String lower){
        String upper = lower;

        if (upper.indexOf("_")>=0){
            upper = upper.substring(0,upper.indexOf("_")).concat(clearLine(upper.substring(upper.indexOf("_")+1,upper.length())));
        }
        return upper;
    }
}
