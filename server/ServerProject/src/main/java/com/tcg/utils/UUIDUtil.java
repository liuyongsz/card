package com.tcg.utils;

import java.util.UUID;

public class UUIDUtil {
	
	public static String getUUID(){ 
		String uuid = UUID.randomUUID().toString();
		
		return uuid;
	}
	
	public static int getUUIDHash(){ 
		return getUUID().hashCode();
	}
	
}
