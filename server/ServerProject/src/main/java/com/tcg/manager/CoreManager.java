package com.tcg.manager;

import java.util.ArrayList;
import java.util.List;

public class CoreManager implements IManager {
	
	private static CoreManager instance = new CoreManager();
	private List<IManager> allManagers = new ArrayList<IManager>();
	
	public static CoreManager getInstance() {  
        return instance;  
    }  
	
	public void init() {
		for (IManager m : allManagers)
		{
			m.init();
		}

	}

	public void shutdown() {
		int size = allManagers.size();
		for (int i = size - 1;  i >= 0; --i)
		{
			allManagers.get(i).shutdown();
		}
	}
	
	public void Register(IManager m)
	{
		allManagers.add(m);
	}

}
