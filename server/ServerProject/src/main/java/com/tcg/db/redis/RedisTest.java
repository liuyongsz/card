package com.tcg.db.redis;

import java.io.File;

import redis.clients.jedis.Jedis;
import redis.clients.jedis.JedisPool;
import redis.clients.jedis.JedisPoolConfig;

public class RedisTest {

	public static void main(String[] args) {
		File f = new File(".");
		String absolutePath = f.getAbsolutePath();
		System.out.println(absolutePath);
//		 ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("spring-redis-beans.xml");  
//		RedisTemplate redisTemplate = (RedisTemplate)context.getBean("jedisTemplate");  
//	        //其中key采取了StringRedisSerializer  
//	        //其中value采取JdkSerializationRedisSerializer  
//	       ValueOperations<String, PlayerVO> valueOper = redisTemplate.opsForValue();
//	       ValueOperations<String, String> valueOper1 = redisTemplate.opsForValue();
//	       PlayerVO vo = new PlayerVO();
//	       vo.setAid(1);
//	       vo.setPid(2);
//	       valueOper.set("a:1", vo);
//	        System.out.println(valueOper.get("a:1").getLevel()); 
//	        PlayerVO newVO= valueOper.get("a:2");
//	        System.out.println(newVO);
	}
	
	public static class RedisUtil   
	{  
	    private JedisPool pool = null;  
	      
	    /** 
	     * 获取jedis连接池 
	     * */  
	    public JedisPool getPool()  
	    {  
	        if(pool == null)  
	        {  
	            //创建jedis连接池配置  
	            JedisPoolConfig config = new JedisPoolConfig();  
	            //最大连接数  
	            config.setMaxTotal(100);  
	            //最大空闲连接  
	            config.setMaxIdle(5);  
	            //创建redis连接池  
	            pool = new JedisPool(config,"127.0.0.1",7890);  
	        }  
	        return pool;  
	    }  
	      
	    /** 
	     * 获取jedis连接 
	     * */  
	    public Jedis getConn()  
	    {  
	        return getPool().getResource();  
	    }  
	} 

}
