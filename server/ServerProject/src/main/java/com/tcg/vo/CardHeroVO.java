package com.tcg.vo;


import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class CardHeroVO implements Serializable {

    private static final long serialVersionUID = 1L;

    private int uuid;//小队英雄uuid
    private int teamId;//归属小队uuid
    private String name;
    private int arcaneId;//奥义
    private int configId;//
    private int pos;//位置
    private List<Integer> cardList = new ArrayList<Integer>();

    public int getUuid() {
        return uuid;
    }

    public void setUuid(int uuid) {
        this.uuid = uuid;
    }

    public int getTeamUUid() {
        return teamId;
    }

    public void setTeamUUid(int id) {
        this.teamId = id;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getConfigId() {
        return configId;
    }

    public void setConfigId(int configId) {
        this.configId = configId;
    }

    public void setPos(int pos) {
        this.pos = pos;
    }

    public int getPos() {
        return pos;
    }

    public int getArcaneId() {
        return arcaneId;
    }

    public void setArcaneId(int arcaneId) {
        this.arcaneId = arcaneId;
    }

    public List<Integer> getCardList() {
        return cardList;
    }

    public void setCardList(List<Integer> cardList) {
        this.cardList = cardList;
    }
    public boolean saveCardIdInList(int cardID){
        int index =  this.cardList.indexOf(cardID);
        if (index>=0){
            return false;
        }
        this.cardList.add(cardID);
        return true;

    }
}
