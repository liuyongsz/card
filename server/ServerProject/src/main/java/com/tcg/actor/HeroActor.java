package com.tcg.actor;

import com.tcg.annotation.MessageMapping;
import com.tcg.constant.ChannelKeyConstant;
import com.tcg.manager.ConfigManager;
import com.tcg.manager.MessageManager;
import com.tcg.msg.net.NetMessage;
import com.tcg.server.session.ISession;
import com.tcg.service.HeroDAO;
import com.tcg.vo.HeroVO;
import com.tcg.vo.PlayerVO;
import protomsg.Rpc;

import java.util.List;

public class HeroActor extends MessageActor {

    //请求英雄列表
    @MessageMapping(Rpc.Request.HeroListReq_VALUE)
    public void getHeroListRes(NetMessage message){

        ISession session = message.getSession();
        PlayerVO player = (PlayerVO) session.getData(ChannelKeyConstant.PLAYER_KEY);

        HeroDAO heroDAO = ConfigManager.getInstance().getBean(HeroDAO.class);
        List<HeroVO> heroList = heroDAO.getHeroListVO(player.getPid());

        session.write(MessageManager.getInstance().notifyHeroInfoListMsg(heroList));

    }


}
