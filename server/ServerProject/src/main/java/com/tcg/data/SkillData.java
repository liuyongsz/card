package com.tcg.data;

//desc:生成基础数据的VO对象
public class SkillData implements Cloneable{

    
        /**
        *主动目标
        */
    private java.util.Set<Integer> effect_target;
    
        /**
        *语音
        */
    private int voice;
    
        /**
        *图标资源
        */
    private String res;
    
        /**
        *英雄弹出
        */
    private String hero_out;
    
        /**
        *主动画发动
默认在主动效果effect_list最前播放，否则填写某效果编号，代表在该效果后播放
        */
    private int a_trigger;
    
        /**
        *效果范围类型
1.单体
2.群体
        */
    private int effect_type;
    
        /**
        *主动效果
        */
    private java.util.List<Integer> effect_list;
    
        /**
        *关键词
        */
    private java.util.List<Integer> keyword_list;
    
        /**
        *主动画
        */
    private String animation;
    
        /**
        *英雄收回
        */
    private String hero_back;
    
        /**
        *被动目标
        */
    private java.util.List<Integer> effect_target1;
    
        /**
        *卡牌描述
        */
    private String skill_dis;
    
        /**
        *主动画
对自己释放时播放
        */
    private String animation1;
    
        /**
        *天赋类型
1.主动
2.被动
        */
    private int talent_type;
    
        /**
        *主动画调用数值
填写对应的效果编号
        */
    private java.util.List<Integer> a_value;
    
        /**
        *卡牌名称
        */
    private String name;
    
        /**
        *光环效果
        */
    private java.util.List<Integer> effect_list2;
    
        /**
        *技能ID
        */
    private int skill_id;
    
        /**
        *被动效果
        */
    private java.util.List<Integer> effect_list1;
    
        /**
        *所属英雄
        */
    private String hero_id;
    
        /**
        *经验/能量
        */
    private int skill_exp;
    
        /**
        *效果类型
1.攻击
2.防御
3.治疗
4.增益
5.减益
6.特效
        */
    private java.util.List<Integer> skill_type1;
    

    
    /**
     *主动目标
     */
    final public java.util.Set<Integer> getEffect_target(){

        return effect_target;

    }

    final public void setEffect_target(java.util.Set<Integer> effect_target){

          this.effect_target =  effect_target;
    }
    
    /**
     *语音
     */
    final public int getVoice(){

        return voice;

    }

    final public void setVoice(int voice){

          this.voice =  voice;
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
     *英雄弹出
     */
    final public String getHero_out(){

        return hero_out;

    }

    final public void setHero_out(String hero_out){

          this.hero_out =  hero_out;
    }
    
    /**
     *主动画发动
默认在主动效果effect_list最前播放，否则填写某效果编号，代表在该效果后播放
     */
    final public int getA_trigger(){

        return a_trigger;

    }

    final public void setA_trigger(int a_trigger){

          this.a_trigger =  a_trigger;
    }
    
    /**
     *效果范围类型
1.单体
2.群体
     */
    final public int getEffect_type(){

        return effect_type;

    }

    final public void setEffect_type(int effect_type){

          this.effect_type =  effect_type;
    }
    
    /**
     *主动效果
     */
    final public java.util.List<Integer> getEffect_list(){

        return effect_list;

    }

    final public void setEffect_list(java.util.List<Integer> effect_list){

          this.effect_list =  effect_list;
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
    
    /**
     *主动画
     */
    final public String getAnimation(){

        return animation;

    }

    final public void setAnimation(String animation){

          this.animation =  animation;
    }
    
    /**
     *英雄收回
     */
    final public String getHero_back(){

        return hero_back;

    }

    final public void setHero_back(String hero_back){

          this.hero_back =  hero_back;
    }
    
    /**
     *被动目标
     */
    final public java.util.List<Integer> getEffect_target1(){

        return effect_target1;

    }

    final public void setEffect_target1(java.util.List<Integer> effect_target1){

          this.effect_target1 =  effect_target1;
    }
    
    /**
     *卡牌描述
     */
    final public String getSkill_dis(){

        return skill_dis;

    }

    final public void setSkill_dis(String skill_dis){

          this.skill_dis =  skill_dis;
    }
    
    /**
     *主动画
对自己释放时播放
     */
    final public String getAnimation1(){

        return animation1;

    }

    final public void setAnimation1(String animation1){

          this.animation1 =  animation1;
    }
    
    /**
     *天赋类型
1.主动
2.被动
     */
    final public int getTalent_type(){

        return talent_type;

    }

    final public void setTalent_type(int talent_type){

          this.talent_type =  talent_type;
    }
    
    /**
     *主动画调用数值
填写对应的效果编号
     */
    final public java.util.List<Integer> getA_value(){

        return a_value;

    }

    final public void setA_value(java.util.List<Integer> a_value){

          this.a_value =  a_value;
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
     *光环效果
     */
    final public java.util.List<Integer> getEffect_list2(){

        return effect_list2;

    }

    final public void setEffect_list2(java.util.List<Integer> effect_list2){

          this.effect_list2 =  effect_list2;
    }
    
    /**
     *技能ID
     */
    final public int getSkill_id(){

        return skill_id;

    }

    final public void setSkill_id(int skill_id){

          this.skill_id =  skill_id;
    }
    
    /**
     *被动效果
     */
    final public java.util.List<Integer> getEffect_list1(){

        return effect_list1;

    }

    final public void setEffect_list1(java.util.List<Integer> effect_list1){

          this.effect_list1 =  effect_list1;
    }
    
    /**
     *所属英雄
     */
    final public String getHero_id(){

        return hero_id;

    }

    final public void setHero_id(String hero_id){

          this.hero_id =  hero_id;
    }
    
    /**
     *经验/能量
     */
    final public int getSkill_exp(){

        return skill_exp;

    }

    final public void setSkill_exp(int skill_exp){

          this.skill_exp =  skill_exp;
    }
    
    /**
     *效果类型
1.攻击
2.防御
3.治疗
4.增益
5.减益
6.特效
     */
    final public java.util.List<Integer> getSkill_type1(){

        return skill_type1;

    }

    final public void setSkill_type1(java.util.List<Integer> skill_type1){

          this.skill_type1 =  skill_type1;
    }
    

    @Override
    public Object clone() throws CloneNotSupportedException {
        return (SkillData)super.clone();
    }

}
