import com.tcg.manager.CmdManager;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.CoreManager;
import com.tcg.manager.MessageManager;
import com.tcg.manager.RedisManager;
import com.tcg.manager.ServerManager;

public class Main {

	public static void main(String[] args) {
		CoreManager.getInstance().Register(ConfigManager.getInstance());
		CoreManager.getInstance().Register(CmdManager.getInstance());
		CoreManager.getInstance().Register(RedisManager.getInstance());
		CoreManager.getInstance().Register(MessageManager.getInstance());
		//通信模块最后启动
		CoreManager.getInstance().Register(ServerManager.getInstance());
		
		
		CoreManager.getInstance().init();

		Thread shutdownThread = new Thread() {
			public void run() {
				System.out.println("shutdown");
			}
		};
		Runtime.getRuntime().addShutdownHook(shutdownThread);
	}

}
