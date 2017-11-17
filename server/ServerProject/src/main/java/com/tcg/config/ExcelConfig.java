package com.tcg.config;

import java.util.List;

public class ExcelConfig {
	private String path;
	
	private String packageName;
	
	private List<String> filter;

	public String getPath() {
		return path;
	}

	public void setPath(String path) {
		this.path = path;
	}

	public String getPackageName() {
		return packageName;
	}

	public void setPackageName(String packageName) {
		this.packageName = packageName;
	}

	public List<String> getFilter() {
		return filter;
	}

	public void setFilter(List<String> filter) {
		this.filter = filter;
	}
	
	
	
}
