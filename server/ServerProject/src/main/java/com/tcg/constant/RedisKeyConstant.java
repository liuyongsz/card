package com.tcg.constant;

public class RedisKeyConstant {
	public static final String DELIMITER = ":";
	//账号对应id
	public static final String ACCOUT_LIST = "AccoutList";
	//玩家名字对应id
	public static final String NAME_LIST = "NameList";
	public static final String PLAYER_KEY = "Player" + DELIMITER;
	public static final String HERO_KEY = "Hero" + DELIMITER;
	//自动增长id
	public static final String PID_AUTOINC_KEY = "PidAutoinc";
	public static final String CARD_TEAM ="CardTeam" + DELIMITER;
	public static final String RANK_CARD_TEAM = "RankCardTeam" + DELIMITER;
	public static final String TEAM_HERO_KEY = "TeamHero" + DELIMITER;
	public static final String RANK_HERO_KEY = "RankHero"+ DELIMITER;
	public static final String HERO_CARD_KEY ="HeroCard" + DELIMITER;
	public static final String PLAYER_HAVA_CARD_KEY="PlayerHaveCard" + DELIMITER;
	public static final String CARD_HERO_CONFIG_KEY = "CardHeroConfig" + DELIMITER;
}
