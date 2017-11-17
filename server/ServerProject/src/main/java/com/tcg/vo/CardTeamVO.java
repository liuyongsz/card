package com.tcg.vo;

import java.io.Serializable;

public class CardTeamVO implements Serializable
{
    private static final long serialVersionUID = 1L;

    private int uuid;
    private String teamName;

    public int getUuid() {
        return uuid;
    }

    public void setUuid(int uuid) {
        this.uuid = uuid;
    }


    public String getTeamName() {
        return teamName;
    }

    public void setTeamName(String teamName) {
        this.teamName = teamName;
    }
}
