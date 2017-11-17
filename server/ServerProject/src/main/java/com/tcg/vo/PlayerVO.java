package com.tcg.vo;

import java.io.Serializable;
import java.util.List;

import com.tcg.constant.PlayerState;

public class PlayerVO implements Serializable{

	private static final long serialVersionUID = 1L;
	
	private int pid;
	
	private String aid;
	
	private String nickName;
	
	private String head;

	private String password;

	private int level;
	
	private int exp;
	
	private int sex;
	
	private PlayerState playerState = PlayerState.None;
	
	private int selectTeam;

	private int selectCardTeamUUid;//当前操作的组牌小队

	private int curRankTeamId;//当前操作排位小队

	private int gold;//金币

	private int diamond;//钻石

	private int lorePoint;//奥义点

	private int coupon;//奖券

	private int crystal;//晶体

	private List<Integer> heros;


	//------------------------------------------------------
	public int getPid() {
		return pid;
	}

	public void setPid(int pid) {
		this.pid = pid;
	}

	public String getAid() {
		return aid;
	}

	public void setAid(String aid) {
		this.aid = aid;
	}

	public String getNickName() {
		return nickName;
	}

	public void setNickName(String nickName) {
		this.nickName = nickName;
	}

	public String getHead() {
		return head;
	}

	public void setHead(String head) {
		this.head = head;
	}

	public int getLevel() {
		return level;
	}

	public void setLevel(int level) {
		this.level = level;
	}

	public int getExp() {
		return exp;
	}

	public void setExp(int exp) {
		this.exp = exp;
	}

	public int getSex() {
		return sex;
	}

	public void setSex(int sex) {
		this.sex = sex;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public PlayerState getPlayerState() {
		return playerState;
	}

	public void setPlayerState(PlayerState playerState) {
		this.playerState = playerState;
	}

	public int getSelectTeam() {
		return selectTeam;
	}

	public void setSelectTeam(int selectTeam) {
		this.selectTeam = selectTeam;
	}

	public int getSelectCardTeamUUid() {
		return selectCardTeamUUid;
	}

	public void setSelectCardTeamUUid(int selectCardTeamUUid) {
		this.selectCardTeamUUid = selectCardTeamUUid;
	}

	public int getCurRankTeamId() {
		return curRankTeamId;
	}

	public void setCurRankTeamId(int curRankTeamId) {
		this.curRankTeamId = curRankTeamId;
	}

	public List<Integer> getHeros() {
		return heros;
	}

	public void setHeros(List<Integer> heros) {
		this.heros = heros;
	}


	public int getGold() {
		return gold;
	}

	public void setGold(int gold) {
		this.gold = gold;
	}

	public int getDiamond() {
		return diamond;
	}

	public void setDiamond(int diamond) {
		this.diamond = diamond;
	}

	public int getLorePoint() {
		return lorePoint;
	}

	public void setLorePoint(int lorePoint) {
		this.lorePoint = lorePoint;
	}

	public int getCoupon() {
		return coupon;
	}

	public void setCoupon(int coupon) {
		this.coupon = coupon;
	}

	public int getCrystal() {
		return crystal;
	}

	public void setCrystal(int crystal) {
		this.crystal = crystal;
	}
}
