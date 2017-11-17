package com.tcg.utils;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.apache.commons.lang3.StringUtils;

public class StringUtil {

    public static boolean isChinese(char ch) {
        if (ch >= '\u4e00' && ch <= '\u9f05') {
            return true;
        }
        return false;
    }

    public static boolean includeChinese(String str) {
        if (str == null) {
            return false;
        }
        for (char c : str.toCharArray()) {
            if (isChinese(c)) {
                return true;
            }
        }
        return false;
    }

    public static boolean isAlpha(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            return true;
        }
        return false;
    }

    /**
     * 字母成或者数字
     *
     * @param str
     * @return
     * @author JackChu
     * @version 2011-7-6 上午10:15:10
     */
    public static boolean isAlphanumeric(String str) {
        for (char ch : str.toCharArray()) {
            if (!Character.isDigit(ch) && !isAlpha(ch) && ch != '_' && ch != '.' && ch != '@')
                return false;
        }
        return true;
    }

    /**
     * @param strs
     * @return
     * @author JackChu
     * @version 2011-3-26 下午01:43:29
     */
    public static boolean isBlank(String... strs) {
        for (String str : strs) {
            if (StringUtils.isBlank(str)) {
                return true;
            }
        }
        return false;
    }

    /**
     * 附加全角空格
     *
     * @param s
     * @return
     * @author JackChu
     * @version 2011-7-25 下午04:47:17
     */
    public static String trim(String s) {
        if (s == null)
            return s;

        int len = s.length();
        int st = 0, ed = len;
        for (int i = 0; i < len; i++) {
            char ch = s.charAt(i);
            if (!Character.isWhitespace(ch)) {
                st = i;
                break;
            }
        }

        for (int i = len - 1; i >= 0; i--) {
            char ch = s.charAt(i);
            if (!Character.isWhitespace(ch)) {
                ed = i + 1;
                break;
            }
        }

        return (st > 0 || ed < len) ? s.substring(st, ed) : s;
    }

    /**
     * 深度trim 内部的空格也trim掉
     *
     * @param str
     * @return
     * @author JackChu
     * @version 2011-8-18 下午08:48:10
     */
    public static String deeplyTrim(String str) {
        StringBuilder result = new StringBuilder();
        if (str == null) {
            return str;
        }
        int len = str.length();
        for (int i = 0; i < len; i++) {
            char ch = str.charAt(i);
            if (!Character.isWhitespace(ch)) {
                result.append(ch);
            }
        }
        return result.toString();
    }

    /**
     * @param areaID
     * @param ptAccount
     * @param companyID
     * @param spID
     * @param accessToken
     * @param hash
     * @return
     * @author JackChu
     * @version 2011-11-21 下午03:41:02
     */
    public static boolean isNull(String... strs) {
        for (String str : strs) {
            if (null == str) {
                return true;
            }
        }
        return false;
    }

    /**
     * 用split 分隔字符串 str 程序自动去掉空白符号
     *
     * @param str   原始字符串
     * @param split 分隔字符串
     * @return 字符串数组
     */
    public static String[] splitString(String str, String split) {
        String[] result = null;
        String sPattern = "[\\s]+";
        if (split != null)
            sPattern = "[\\s" + split + "]+";

        Pattern p = Pattern.compile(sPattern);
        Matcher m = p.matcher(str);
        String strtmp = m.replaceAll(split);
        p = Pattern.compile(split);
        result = p.split(strtmp);

        return result;
    }

    /**
     * 判断字符串是否为数字
     */
    public static Boolean isNumberic(String str) {
        // 正则表达式
        Pattern p = Pattern.compile("[0-9]*");
        return p.matcher(str).matches();
    }

    public static String getFirstName(String name) {
        int index = name.lastIndexOf(".");

        return name.substring(0, index);
    }

    public static String getLastName(String name) {
        int index = name.lastIndexOf(".");

        return name.substring(index + 1);
    }

    public static String getFirstUpper(String lower) {
        String upper = "";

        upper = lower.substring(0, 1).toUpperCase().concat(lower.substring(1));

        if (upper.indexOf("_") >= 0) {
            upper = upper.substring(0, upper.indexOf("_")).concat(getFirstUpper(upper.substring(upper.indexOf("_") + 1, upper.length())));
        }
        return upper;
    }
}
