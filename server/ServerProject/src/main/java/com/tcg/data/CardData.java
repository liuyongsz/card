package com.tcg.data;

//desc:生成基础数据的VO对象
public class CardData implements Cloneable{

    
        /**
        *战斗时
复制卡牌数
        */
    private int card_num;
    
        /**
        *图标资源
        */
    private String res;
    
        /**
        *技能ID&能量花费
        */
    private java.util.List<com.tcg.config.Condition> skill_list;
    
        /**
        *是否进入弃牌区
0进入弃牌区
1不进入弃牌区
        */
    private int discard;
    
        /**
        *死亡卡牌ID
        */
    private int death_id;
    
        /**
        *卡牌名称
        */
    private String name;
    
        /**
        *卡牌效果类型
1.攻击
2.防御
3.治疗
4.增益
5.减益
6.特效
        */
    private java.util.List<Integer> card_type1;
    
        /**
        *卡牌类型
1.技能卡牌
2.结界卡牌
3.任务卡牌
4.灵体卡牌
        */
    private int card_type;
    
        /**
        *卡牌ID
        */
    private int card_id;
    
        /**
        *关键词
        */
    private java.util.List<Integer> keyword_list;
    

    
    /**
     *战斗时
复制卡牌数
     */
    final public int getCard_num(){

        return card_num;

    }

    final public void setCard_num(int card_num){

          this.card_num =  card_num;
    }
    
    /**
     *图标资源
     */
    final public String getRes(){

        return res;

    }

    final public void setRes(String res){

          this.res =  res;
    }
    
    /**
     *技能ID&能量花费
     */
    final public java.util.List<com.tcg.config.Condition> getSkill_list(){

        return skill_list;

    }

    final public void setSkill_list(java.util.List<com.tcg.config.Condition> skill_list){

          this.skill_list =  skill_list;
    }
    
    /**
     *是否进入弃牌区
0进入弃牌区
1不进入弃牌区
     */
    final public int getDiscard(){

        return discard;

    }

    final public void setDiscard(int discard){

          this.discard =  discard;
    }
    
    /**
     *死亡卡牌ID
     */
    final public int getDeath_id(){

        return death_id;

    }

    final public void setDeath_id(int death_id){

          this.death_id =  death_id;
    }
    
    /**
     *卡牌名称
     */
    final public String getName(){

        return name;

    }

    final public void setName(String name){

          this.name =  name;
    }
    
    /**
     *卡牌效果类型
1.攻击
2.防御
3.治疗
4.增益
5.减益
6.特效
     */
    final public java.util.List<Integer> getCard_type1(){

        return card_type1;

    }

    final public void setCard_type1(java.util.List<Integer> card_type1){

          this.card_type1 =  card_type1;
    }
    
    /**
     *卡牌类型
1.技能卡牌
2.结界卡牌
3.任务卡牌
4.灵体卡牌
     */
    final public int getCard_type(){

        return card_type;

    }

    final public void setCard_type(int card_type){

          this.card_type =  card_type;
    }
    
    /**
     *卡牌ID
     */
    final public int getCard_id(){

        return card_id;

    }

    final public void setCard_id(int card_id){

          this.card_id =  card_id;
    }
    
    /**
     *关键词
     */
    final public java.util.List<Integer> getKeyword_list(){

        return keyword_list;

    }

    final public void setKeyword_list(java.util.List<Integer> keyword_list){

          this.keyword_list =  keyword_list;
    }
    

    @Override
    public Object clone() throws CloneNotSupportedException {
        return (CardData)super.clone();
    }

}
