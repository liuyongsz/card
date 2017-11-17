package com.tcg.data;

//desc:生成基础数据的VO对象
public class EffectData implements Cloneable{

    
        /**
        * 使用次数类型
1.使用几次
2.使用几回合
3.永久使用
        */
    private int time_type;
    
        /**
        *随机种子
        */
    private int seed;
    
        /**
        *X值倍数
        */
    private int effect_value_c_rate;
    
        /**
        *卡牌效果类型
1.攻击
2.防御
3.治疗
4.增益
5.减益
6.特效
        */
    private int card_type1;
    
        /**
        * 发动方式
1.自动发动
2.手动选择
3.随机目标
        */
    private int choose;
    
        /**
        *目标类型
1.我方
2.敌方
3.双方
        */
    private int target_type1;
    
        /**
        *技能关联
0.无关联
1.有关联
        */
    private int relation;
    
        /**
        *配表参考
        */
    private String reference;
    
        /**
        *额外牌
        */
    private java.util.List<Integer> extra_card;
    
        /**
        *     效果时效类型
1.生效几次后，取消该效果
2.几个回合后，取消该效果
3.效果永久生效，不取消
        */
    private int valid_type;
    
        /**
        *       效果目标
1：与使用者同位置的英雄（若为我方则本英雄，若为敌方则敌方对称的英雄）
2：末位英雄
3：与使用者不同位的英雄（若为我方则我方其他英雄；敌方不配置）
4：在使用者前方的英雄
5：在使用者后方的英雄
6：在使用者前方的1个英雄
7：在使用者后方的1个英雄
8：与使用者相邻的英雄


        */
    private int hero_target2;
    
        /**
        *   效果目标
1：①号位
2：②号位
3：③号位
4：④号位

        */
    private java.util.List<Integer> hero_target;
    
        /**
        *     X值
1.本卡牌造成的伤害
        */
    private int effect_value_change;
    
        /**
        *目标类型
1.我方
2.敌方
3.双方
        */
    private int condition_target2;
    
        /**
        *效果时效
        */
    private int valid_value;
    
        /**
        *目标类型
1.英雄
2.卡牌
3.玩家
        */
    private int condition_target1;
    
        /**
        *发动多次
（2选1）
        */
    private int fight_value;
    
        /**
        *发动X次
（2选1）
        */
    private int fight_value_change;
    
        /**
        *概率
        */
    private java.util.List<com.tcg.config.Condition> probability;
    
        /**
        *释放特效
        */
    private int a_start;
    
        /**
        *使用次数
        */
    private int time_value;
    
        /**
        *目标类型
1.英雄
2.卡牌
3.玩家
        */
    private int target_type;
    
        /**
        *效果基础值
        */
    private int effect_value;
    
        /**
        *卡牌类型
1.技能卡牌
2.结界卡牌
3.任务卡牌
4.灵体卡牌
        */
    private java.util.List<Integer> card_type;
    
        /**
        *       发动时机
1.使用本卡牌时
2.抽到本卡牌时
3.本卡牌被吃时
4.本卡牌吃卡牌时
5.我方回合开始时
6.我方回合结束时
7.敌方回合开始时
8.敌方回合结束时
9.本英雄位于1号时
10.本英雄位于2号时
11.本英雄位于3号时
12.本英雄位于4号时
13.本英雄前进时
14.本英雄后退时
15.我方其他英雄后退时
16.我方其他英雄前进时
17.敌方英雄前进时
18.敌方英雄后退时
19.本英雄恢复生命时
20.我方其他英雄恢复生命时
21.敌方英雄恢复生命时
22.本英雄受到伤害时
23.我方其他英雄受到伤害时
24.敌方英雄受到伤害时
25.本英雄护甲增加时
26.我方其他英雄护甲增加时
27.敌方英雄护甲增加时
28.本英雄护甲减少时
29.我方其他英雄护甲减少时
30.敌方英雄护甲减少时
31.本英雄死亡时
32.我方其他英雄死亡时
33.敌方英雄死亡时
34.我方天赋原力点增加时
35.我方天赋原力点减少时
36.敌方天赋原力点增加时
37.敌方天赋原力点减少时
38.我方卡牌被移除时
39.敌方卡牌被移除时
40.我方抽牌时
41.敌方抽牌时
42.本英雄觉醒时
43.敌方英雄觉醒时
44.本英雄使用奥义时
45.我方其他英雄使用天赋时
46.敌方英雄使用天赋时
47.我方卡牌发动出现时
48.敌方卡牌发动出现时
49.我方其他卡牌获得能量时
50.敌方卡牌获得能量时
51.我方其他卡牌吃卡牌时
52.敌方卡牌吃卡牌时
53.我方其他卡牌被吃时
54.敌方卡牌被吃时
55.本任务完成时

        */
    private int condition;
    
        /**
        *受击特效
        */
    private int a_hit;
    
        /**
        *     效果类型
1.造成单体伤害
2.造成群体伤害
3.恢复生命
4.护甲+
5.护甲-
6.前进
7.后退
8.随机移动
9.天赋原力+
10.天赋原力-
11.卡牌能量+
12.卡牌能量-
13.抽牌库的牌
14.抽额外的牌
15.移除卡牌
16.放逐卡牌
17.卡牌/英雄造成的单体伤害+
18.卡牌/英雄造成的单体伤害-
19.卡牌/英雄造成的群体伤害+
20.卡牌/英雄造成的群体伤害-
21.卡牌/英雄造成的所有伤害+
22.卡牌/英雄造成的所有伤害-
23.移动次数+
24.移动次数-
25.使用天赋次数+
26.使用天赋次数-
27.不能移动
28.不能使用天赋
29.不能使用卡牌
30.抵消几次伤害后弃置
31.重置英雄状态
32.任务进度+
33.获得任务奖励
        */
    private int effect;
    
        /**
        *效果id
        */
    private int effect_id;
    

    
    /**
     * 使用次数类型
1.使用几次
2.使用几回合
3.永久使用
     */
    final public int getTime_type(){

        return time_type;

    }

    final public void setTime_type(int time_type){

          this.time_type =  time_type;
    }
    
    /**
     *随机种子
     */
    final public int getSeed(){

        return seed;

    }

    final public void setSeed(int seed){

          this.seed =  seed;
    }
    
    /**
     *X值倍数
     */
    final public int getEffect_value_c_rate(){

        return effect_value_c_rate;

    }

    final public void setEffect_value_c_rate(int effect_value_c_rate){

          this.effect_value_c_rate =  effect_value_c_rate;
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
    final public int getCard_type1(){

        return card_type1;

    }

    final public void setCard_type1(int card_type1){

          this.card_type1 =  card_type1;
    }
    
    /**
     * 发动方式
1.自动发动
2.手动选择
3.随机目标
     */
    final public int getChoose(){

        return choose;

    }

    final public void setChoose(int choose){

          this.choose =  choose;
    }
    
    /**
     *目标类型
1.我方
2.敌方
3.双方
     */
    final public int getTarget_type1(){

        return target_type1;

    }

    final public void setTarget_type1(int target_type1){

          this.target_type1 =  target_type1;
    }
    
    /**
     *技能关联
0.无关联
1.有关联
     */
    final public int getRelation(){

        return relation;

    }

    final public void setRelation(int relation){

          this.relation =  relation;
    }
    
    /**
     *配表参考
     */
    final public String getReference(){

        return reference;

    }

    final public void setReference(String reference){

          this.reference =  reference;
    }
    
    /**
     *额外牌
     */
    final public java.util.List<Integer> getExtra_card(){

        return extra_card;

    }

    final public void setExtra_card(java.util.List<Integer> extra_card){

          this.extra_card =  extra_card;
    }
    
    /**
     *     效果时效类型
1.生效几次后，取消该效果
2.几个回合后，取消该效果
3.效果永久生效，不取消
     */
    final public int getValid_type(){

        return valid_type;

    }

    final public void setValid_type(int valid_type){

          this.valid_type =  valid_type;
    }
    
    /**
     *       效果目标
1：与使用者同位置的英雄（若为我方则本英雄，若为敌方则敌方对称的英雄）
2：末位英雄
3：与使用者不同位的英雄（若为我方则我方其他英雄；敌方不配置）
4：在使用者前方的英雄
5：在使用者后方的英雄
6：在使用者前方的1个英雄
7：在使用者后方的1个英雄
8：与使用者相邻的英雄


     */
    final public int getHero_target2(){

        return hero_target2;

    }

    final public void setHero_target2(int hero_target2){

          this.hero_target2 =  hero_target2;
    }
    
    /**
     *   效果目标
1：①号位
2：②号位
3：③号位
4：④号位

     */
    final public java.util.List<Integer> getHero_target(){

        return hero_target;

    }

    final public void setHero_target(java.util.List<Integer> hero_target){

          this.hero_target =  hero_target;
    }
    
    /**
     *     X值
1.本卡牌造成的伤害
     */
    final public int getEffect_value_change(){

        return effect_value_change;

    }

    final public void setEffect_value_change(int effect_value_change){

          this.effect_value_change =  effect_value_change;
    }
    
    /**
     *目标类型
1.我方
2.敌方
3.双方
     */
    final public int getCondition_target2(){

        return condition_target2;

    }

    final public void setCondition_target2(int condition_target2){

          this.condition_target2 =  condition_target2;
    }
    
    /**
     *效果时效
     */
    final public int getValid_value(){

        return valid_value;

    }

    final public void setValid_value(int valid_value){

          this.valid_value =  valid_value;
    }
    
    /**
     *目标类型
1.英雄
2.卡牌
3.玩家
     */
    final public int getCondition_target1(){

        return condition_target1;

    }

    final public void setCondition_target1(int condition_target1){

          this.condition_target1 =  condition_target1;
    }
    
    /**
     *发动多次
（2选1）
     */
    final public int getFight_value(){

        return fight_value;

    }

    final public void setFight_value(int fight_value){

          this.fight_value =  fight_value;
    }
    
    /**
     *发动X次
（2选1）
     */
    final public int getFight_value_change(){

        return fight_value_change;

    }

    final public void setFight_value_change(int fight_value_change){

          this.fight_value_change =  fight_value_change;
    }
    
    /**
     *概率
     */
    final public java.util.List<com.tcg.config.Condition> getProbability(){

        return probability;

    }

    final public void setProbability(java.util.List<com.tcg.config.Condition> probability){

          this.probability =  probability;
    }
    
    /**
     *释放特效
     */
    final public int getA_start(){

        return a_start;

    }

    final public void setA_start(int a_start){

          this.a_start =  a_start;
    }
    
    /**
     *使用次数
     */
    final public int getTime_value(){

        return time_value;

    }

    final public void setTime_value(int time_value){

          this.time_value =  time_value;
    }
    
    /**
     *目标类型
1.英雄
2.卡牌
3.玩家
     */
    final public int getTarget_type(){

        return target_type;

    }

    final public void setTarget_type(int target_type){

          this.target_type =  target_type;
    }
    
    /**
     *效果基础值
     */
    final public int getEffect_value(){

        return effect_value;

    }

    final public void setEffect_value(int effect_value){

          this.effect_value =  effect_value;
    }
    
    /**
     *卡牌类型
1.技能卡牌
2.结界卡牌
3.任务卡牌
4.灵体卡牌
     */
    final public java.util.List<Integer> getCard_type(){

        return card_type;

    }

    final public void setCard_type(java.util.List<Integer> card_type){

          this.card_type =  card_type;
    }
    
    /**
     *       发动时机
1.使用本卡牌时
2.抽到本卡牌时
3.本卡牌被吃时
4.本卡牌吃卡牌时
5.我方回合开始时
6.我方回合结束时
7.敌方回合开始时
8.敌方回合结束时
9.本英雄位于1号时
10.本英雄位于2号时
11.本英雄位于3号时
12.本英雄位于4号时
13.本英雄前进时
14.本英雄后退时
15.我方其他英雄后退时
16.我方其他英雄前进时
17.敌方英雄前进时
18.敌方英雄后退时
19.本英雄恢复生命时
20.我方其他英雄恢复生命时
21.敌方英雄恢复生命时
22.本英雄受到伤害时
23.我方其他英雄受到伤害时
24.敌方英雄受到伤害时
25.本英雄护甲增加时
26.我方其他英雄护甲增加时
27.敌方英雄护甲增加时
28.本英雄护甲减少时
29.我方其他英雄护甲减少时
30.敌方英雄护甲减少时
31.本英雄死亡时
32.我方其他英雄死亡时
33.敌方英雄死亡时
34.我方天赋原力点增加时
35.我方天赋原力点减少时
36.敌方天赋原力点增加时
37.敌方天赋原力点减少时
38.我方卡牌被移除时
39.敌方卡牌被移除时
40.我方抽牌时
41.敌方抽牌时
42.本英雄觉醒时
43.敌方英雄觉醒时
44.本英雄使用奥义时
45.我方其他英雄使用天赋时
46.敌方英雄使用天赋时
47.我方卡牌发动出现时
48.敌方卡牌发动出现时
49.我方其他卡牌获得能量时
50.敌方卡牌获得能量时
51.我方其他卡牌吃卡牌时
52.敌方卡牌吃卡牌时
53.我方其他卡牌被吃时
54.敌方卡牌被吃时
55.本任务完成时

     */
    final public int getCondition(){

        return condition;

    }

    final public void setCondition(int condition){

          this.condition =  condition;
    }
    
    /**
     *受击特效
     */
    final public int getA_hit(){

        return a_hit;

    }

    final public void setA_hit(int a_hit){

          this.a_hit =  a_hit;
    }
    
    /**
     *     效果类型
1.造成单体伤害
2.造成群体伤害
3.恢复生命
4.护甲+
5.护甲-
6.前进
7.后退
8.随机移动
9.天赋原力+
10.天赋原力-
11.卡牌能量+
12.卡牌能量-
13.抽牌库的牌
14.抽额外的牌
15.移除卡牌
16.放逐卡牌
17.卡牌/英雄造成的单体伤害+
18.卡牌/英雄造成的单体伤害-
19.卡牌/英雄造成的群体伤害+
20.卡牌/英雄造成的群体伤害-
21.卡牌/英雄造成的所有伤害+
22.卡牌/英雄造成的所有伤害-
23.移动次数+
24.移动次数-
25.使用天赋次数+
26.使用天赋次数-
27.不能移动
28.不能使用天赋
29.不能使用卡牌
30.抵消几次伤害后弃置
31.重置英雄状态
32.任务进度+
33.获得任务奖励
     */
    final public int getEffect(){

        return effect;

    }

    final public void setEffect(int effect){

          this.effect =  effect;
    }
    
    /**
     *效果id
     */
    final public int getEffect_id(){

        return effect_id;

    }

    final public void setEffect_id(int effect_id){

          this.effect_id =  effect_id;
    }
    

    @Override
    public Object clone() throws CloneNotSupportedException {
        return (EffectData)super.clone();
    }

}
