package com.tcg.utils;

import com.tcg.data.CardData;

public class CardUtil {
	public static CardData copyCard(CardData data){
		CardData copy = null;
		try {
			copy =  (CardData)data.clone();
		} catch (CloneNotSupportedException e) {
			e.printStackTrace();
		}
		return copy;
	}
}
