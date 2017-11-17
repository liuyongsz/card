package com.tcg.data;

//desc:生成基础数据的VO对象
public class HeroData implements Cloneable{

    
        /**
        *护甲
        */
    private int shield;
    
        /**
        *血量
        */
    private int hp;
    
        /**
        *英雄描述
        */
    private String hero_dis;
    
        /**
        *英雄初始卡牌
        */
    private java.util.List<Integer> card_initial_list;
    
        /**
        *英雄受击
A类动画
        */
    private String hero_atked;
    
        /**
        *觉醒技
        */
    private java.util.List<Integer> awake;
    
        /**
        *英雄所有卡牌
        */
    private java.util.List<Integer> card_list;
    
        /**
        *英雄占格数
        */
    private int hero_occupy;
    
        /**
        *英雄所有奥义
        */
    private java.util.List<Integer> arcane_list;
    
        /**
        *组牌数
        */
    private int deck_build;
    
        /**
        *获得方式
1.系统赠送
2.购买获得
3.英雄券合成
        */
    private int hero_get;
    
        /**
        *觉醒语音
        */
    private String hero_voice4;
    
        /**
        *死亡语音
        */
    private String hero_voice3;
    
        /**
        *英雄名称
        */
    private String hero_name;
    
        /**
        *胜利语音
        */
    private String hero_voice2;
    
        /**
        *英雄施法
B类特效
        */
    private String hero_atk;
    
        /**
        *英雄默认牌组
        */
    private java.util.List<Integer> hero_deck;
    
        /**
        *入场语音
        */
    private String hero_voice1;
    
        /**
        *英雄初始奥义
        */
    private int arcane_initial;
    
        /**
        *英雄类型
1.英雄
2.怪物
9.引导专用
        */
    private int hero_type;
    
        /**
        *动画资源
        */
    private String hero_res;
    
        /**
        *英雄头像
        */
    private String hero_head;
    
        /**
        *英雄id
        */
    private int hero_id;
    
        /**
        *受伤语音
        */
    private String hero_voice5;
    

    
    /**
     *护甲
     */
    final public int getShield(){

        return shield;

    }

    final public void setShield(int shield){

          this.shield =  shield;
    }
    
    /**
     *血量
     */
    final public int getHp(){

        return hp;

    }

    final public void setHp(int hp){

          this.hp =  hp;
    }
    
    /**
     *英雄描述
     */
    final public String getHero_dis(){

        return hero_dis;

    }

    final public void setHero_dis(String hero_dis){

          this.hero_dis =  hero_dis;
    }
    
    /**
     *英雄初始卡牌
     */
    final public java.util.List<Integer> getCard_initial_list(){

        return card_initial_list;

    }

    final public void setCard_initial_list(java.util.List<Integer> card_initial_list){

          this.card_initial_list =  card_initial_list;
    }
    
    /**
     *英雄受击
A类动画
     */
    final public String getHero_atked(){

        return hero_atked;

    }

    final public void setHero_atked(String hero_atked){

          this.hero_atked =  hero_atked;
    }
    
    /**
     *觉醒技
     */
    final public java.util.List<Integer> getAwake(){

        return awake;

    }

    final public void setAwake(java.util.List<Integer> awake){

          this.awake =  awake;
    }
    
    /**
     *英雄所有卡牌
     */
    final public java.util.List<Integer> getCard_list(){

        return card_list;

    }

    final public void setCard_list(java.util.List<Integer> card_list){

          this.card_list =  card_list;
    }
    
    /**
     *英雄占格数
     */
    final public int getHero_occupy(){

        return hero_occupy;

    }

    final public void setHero_occupy(int hero_occupy){

          this.hero_occupy =  hero_occupy;
    }
    
    /**
     *英雄所有奥义
     */
    final public java.util.List<Integer> getArcane_list(){

        return arcane_list;

    }

    final public void setArcane_list(java.util.List<Integer> arcane_list){

          this.arcane_list =  arcane_list;
    }
    
    /**
     *组牌数
     */
    final public int getDeck_build(){

        return deck_build;

    }

    final public void setDeck_build(int deck_build){

          this.deck_build =  deck_build;
    }
    
    /**
     *获得方式
1.系统赠送
2.购买获得
3.英雄券合成
     */
    final public int getHero_get(){

        return hero_get;

    }

    final public void setHero_get(int hero_get){

          this.hero_get =  hero_get;
    }
    
    /**
     *觉醒语音
     */
    final public String getHero_voice4(){

        return hero_voice4;

    }

    final public void setHero_voice4(String hero_voice4){

          this.hero_voice4 =  hero_voice4;
    }
    
    /**
     *死亡语音
     */
    final public String getHero_voice3(){

        return hero_voice3;

    }

    final public void setHero_voice3(String hero_voice3){

          this.hero_voice3 =  hero_voice3;
    }
    
    /**
     *英雄名称
     */
    final public String getHero_name(){

        return hero_name;

    }

    final public void setHero_name(String hero_name){

          this.hero_name =  hero_name;
    }
    
    /**
     *胜利语音
     */
    final public String getHero_voice2(){

        return hero_voice2;

    }

    final public void setHero_voice2(String hero_voice2){

          this.hero_voice2 =  hero_voice2;
    }
    
    /**
     *英雄施法
B类特效
     */
    final public String getHero_atk(){

        return hero_atk;

    }

    final public void setHero_atk(String hero_atk){

          this.hero_atk =  hero_atk;
    }
    
    /**
     *英雄默认牌组
     */
    final public java.util.List<Integer> getHero_deck(){

        return hero_deck;

    }

    final public void setHero_deck(java.util.List<Integer> hero_deck){

          this.hero_deck =  hero_deck;
    }
    
    /**
     *入场语音
     */
    final public String getHero_voice1(){

        return hero_voice1;

    }

    final public void setHero_voice1(String hero_voice1){

          this.hero_voice1 =  hero_voice1;
    }
    
    /**
     *英雄初始奥义
     */
    final public int getArcane_initial(){

        return arcane_initial;

    }

    final public void setArcane_initial(int arcane_initial){

          this.arcane_initial =  arcane_initial;
    }
    
    /**
     *英雄类型
1.英雄
2.怪物
9.引导专用
     */
    final public int getHero_type(){

        return hero_type;

    }

    final public void setHero_type(int hero_type){

          this.hero_type =  hero_type;
    }
    
    /**
     *动画资源
     */
    final public String getHero_res(){

        return hero_res;

    }

    final public void setHero_res(String hero_res){

          this.hero_res =  hero_res;
    }
    
    /**
     *英雄头像
     */
    final public String getHero_head(){

        return hero_head;

    }

    final public void setHero_head(String hero_head){

          this.hero_head =  hero_head;
    }
    
    /**
     *英雄id
     */
    final public int getHero_id(){

        return hero_id;

    }

    final public void setHero_id(int hero_id){

          this.hero_id =  hero_id;
    }
    
    /**
     *受伤语音
     */
    final public String getHero_voice5(){

        return hero_voice5;

    }

    final public void setHero_voice5(String hero_voice5){

          this.hero_voice5 =  hero_voice5;
    }
    

    @Override
    public Object clone() throws CloneNotSupportedException {
        return (HeroData)super.clone();
    }

}
