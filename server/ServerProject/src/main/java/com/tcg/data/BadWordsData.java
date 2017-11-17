package com.tcg.data;

//desc:生成基础数据的VO对象
public class BadWordsData implements Cloneable{

    
        /**
        *Id
        */
    private int id;
    
        /**
        *屏蔽字
        */
    private String word;
    

    
    /**
     *Id
     */
    final public int getId(){

        return id;

    }

    final public void setId(int id){

          this.id =  id;
    }
    
    /**
     *屏蔽字
     */
    final public String getWord(){

        return word;

    }

    final public void setWord(String word){

          this.word =  word;
    }
    

    @Override
    public Object clone() throws CloneNotSupportedException {
        return (BadWordsData)super.clone();
    }

}
