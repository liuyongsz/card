package com.tcg.vo;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class HeroVO implements Serializable {

    private static final long serialVersionUID = 1L;
    private int level;
    private int configId;
    private int trialTime;//英雄体验次数(-1:是已拥有)
    private int curSkinId;//当前皮肤Id
    private int experience;//英雄经验
    private List<Integer> cardList = new ArrayList<Integer>();
    private List<Integer> skinList = new ArrayList<Integer>();


    public int getConfigId() {
        return configId;
    }

    public void setConfigId(int configId) {
        this.configId = configId;
    }

    public int getLeve() {
        return level;
    }

    public void setLeve(int level) {
        this.level = level;
    }

    public int getTrialTime() {
        return trialTime;
    }

    public void setTrialTime(int trialTime) {
        this.trialTime = trialTime;
    }

    public int getCurSkinId() {
        return curSkinId;
    }

    public void setCurSkinId(int curSkinId) {
        this.curSkinId = curSkinId;
    }

    public List<Integer> getCardList() {
        return cardList;
    }

    public boolean saveCardIdInList(int cardID){
        int index =  this.cardList.indexOf(cardID);
        if (index>=0){
            return false;
        }
        this.cardList.add(cardID);
        return true;

    }

    public List<Integer> getSkinList() {
        return skinList;
    }

    public void saveSkinList(int skinId){

        int index = this.skinList.indexOf(skinId);
        if (index>=0)
            return;
        this.skinList.add(skinId);

    }
}
