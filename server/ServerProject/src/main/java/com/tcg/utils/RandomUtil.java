package com.tcg.utils;

import java.security.SecureRandom;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Random;
import java.util.Set;

public class RandomUtil {
	private static final Random RandConst = new SecureRandom();
	
	   /**
     * 计算两数据之间的随机数  备注  例如 1-2 之间生成一个数字 不 包含2
     *
     * @param includeNumber1
     * @param exclusiveNumber2
     * @return [includeNumber1, exclusiveNumber2)
     */
    public static int getRandomValueByRange(int includeNumber1, int exclusiveNumber2) {

        int temp;
        if (includeNumber1 > exclusiveNumber2) {
            temp = RandConst.nextInt(includeNumber1 - exclusiveNumber2);
            return temp + exclusiveNumber2;
        } else {
            temp = RandConst.nextInt(exclusiveNumber2 - includeNumber1);
            return temp + includeNumber1;
        }
    }

    /**
     * 计算两数据之间的随机数  备注  例如 1-2 之间生成一个数字  包含2
     *
     * @return [includeNumber1, exclusiveNumber2]
     */
    public static int getRandomValueFromNum1ToNum2(int num1, int num2) {
        if (num1 == num2)
            return num2;
        int temp = RandConst.nextInt(num2 - num1 + 1);
        return temp + num1;
    }

    public static int getNexInt(int num) {
        if (num == 0) {
            return 0;
        }
        return RandConst.nextInt(num);
    }


    public static boolean isSuccess(int number1, int number2, int rate) {
        int random = getRandomValueByRange(number1, number2);
        return random < rate;
    }

    public static boolean isSuccess(int number1, int number2, double rate) {
        int random = getRandomValueByRange(number1 * 100, number2 * 100);
        return random < (rate * 100);
    }

    /**
     * @param number 基数
     * @param factor 变化因数
     * @return [number-factor,number+factor]
     * @author JackChu
     * @version 2011-8-24 下午03:32:37
     */
    public static int random(int number, int includeMaxNumber, int factor) {
        int min = number - factor > 0 ? number - factor : 0;
        int max = (number + factor > includeMaxNumber ? includeMaxNumber : number + factor) + 1;
        return getRandomValueByRange(min, max);

    }

    public static String getRandomMap(String[] names) {
        int num = getRandomValueByRange(0, names.length);
        return names[num];
    }

    /**
     * 从list中随机取出length个不重复的元素
     *
     * @param list   元素不会重复
     * @param length
     * @return
     * @author JackChu
     * @version 2011-4-19 下午05:05:43
     */
    public static <X> List<X> getRandomPartFromCollection(List<X> list, int length) {
        // FIXME 浅复制数据
        List<X> newList = new ArrayList<X>(list.size());
        for (X x : list) {
            newList.add(x);
        }
        List<X> result = new ArrayList<X>();
        for (int i = 0; i < length; i++) {
            if (newList.size() == 0) {
                break;
            }
            if (newList.size() > 0 && result.size() < length) {
                int index = (int) Math.floor(Math.random() * newList.size());
                result.add(newList.get(index));
                newList.remove(index);
            }
        }
        return result;
    }

    public static <X> List<X> getRandomFromCollection(List<X> list, int begin, int length) {

        List<X> newList = new ArrayList<X>(list.size());
        int len = (begin + 4);

        if (len > list.size()) {
            return list;
        }

        for (int i = begin; i < len; i++) {
            newList.add(list.get(i));
        }

        // FIXME 浅复制数据
        List<X> retList = new ArrayList<X>(newList.size());

        retList = getRandomPartFromCollection(newList, length);

        return retList;
    }

    public static void main(String[] args) {
        // int[] r = getNoRepeatRamdomNumber(3, 12);
        // for (int i : r) {
        //
        // }
        //
        /*List<String> strs = new ArrayList<String>();
        for (int i = 0; i < 8; i++) {
			strs.add(i + "-");
		}
		List<String> s = getRandomFromCollection(strs, 0, 2);
		for (String t : s) {

		}*/
        /*Random rand=new Random();
        for(int i=0;i<100;i++){

        }*/
//        int x = getRandomValueByRange(4, 1);

//        for (int i = 0; i < 20; i++) {
//
//        }

        //测试根据权重获得随机下标
        int cost = 0;
        int testCount = 10000 * 10;
        for (int i = 0; i < 10000; i++) {
            List<Integer> lst = new ArrayList<>();
            int size = getRandomValueByRange(1, 100);
            for (int j = size; j > 0; j--) {
                lst.add(getRandomValueByRange(100, 10000));
            }
            Integer[] arr = new Integer[lst.size()];
            lst.toArray(arr);
            int[] props = new int[arr.length];
            for (int j = 0; j < arr.length; j++) props[j] = arr[j];
            long start = System.nanoTime();
            int index = getRandomIndex(props);
            cost += System.nanoTime() - start;
            System.out.println(String.format("prop length :%d, random index :%d, value :%d", props.length, index, props[index]));
        }
        System.out.println(String.format("test count :%d, cost :%d", testCount, cost / 1000000));
    }


    public static Set<Integer> getNoRepeatRandomNumber(int start, int end, int amount) {
        List<Integer> tmp = new ArrayList<>();
        for (int i = start; i <= end; i++) {
            tmp.add(i);
        }
        Set<Integer> result = new HashSet<>();
        if (tmp.size() <= amount) {
            result.addAll(tmp);
            return result;
        }
        for (int i = 0; i < amount; i++) {
            result.add(tmp.remove(RandConst.nextInt(tmp.size())));
        }
        return result;
    }

    /**
     * 根据权重数组获得随机下标
     *
     * @param props 权重数组
     * @return 随机下标范围 [0, props.length)
     */
    public static int getRandomIndex(int[] props) {
        if (props == null || props.length == 0) {
            throw new NullPointerException("props is null");
        }
        if (props.length == 1) return 0;
        int total = 0;
        for (int prop : props) {
            total += prop;
        }
        int v = RandConst.nextInt(total);
        int dt = 0;
        for (int i = 0; i < props.length; i++) {
            if (dt <= v && v < (dt += props[i])) return i;
        }
        throw new IllegalArgumentException(String.format("never catch here props :%s", Arrays.toString(props)));
    }
    
    public static <X> X getRandomValue(List<X> list) {
    	int size = list.size();
    	int index = getNexInt(size);
    	return list.get(index);
    }
}
