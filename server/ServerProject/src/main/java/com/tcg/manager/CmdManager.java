package com.tcg.manager;

import java.util.Scanner;

public class CmdManager implements IManager {
	
	private static CmdManager instance = new CmdManager();
	private Thread thread;
	private volatile boolean running = true;
	
	public static CmdManager getInstance() {  
        return instance;  
    }  
	
	public void init() {
		thread = new Thread() {
			private Scanner stu;

			public void run() {
				stu = new Scanner(System.in);
				while(running&&!thread.isInterrupted()){
					if(stu.hasNext()){
						String cmd = stu.next();
						if(cmd.equals("shutdown")){
							CoreManager.getInstance().shutdown();
							System.exit(0);
						}else{
							System.out.println(cmd);
						}
					}
				}
			}
		};
		thread.start();

	}

	public void shutdown() {
		running = false;
		thread.interrupt();
	}

}
