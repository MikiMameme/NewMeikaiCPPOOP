//退会済み会員クラス

#pragma once
#include<iostream>
#include"Member.h"

//退会済み会員クラス
class ResigningMember :private Member {

public:
	//コンストラクタ
	ResigningMember(const std::string& name, int number, double w):
		Member(name,number, w){  }

	//体重設定
	double get_weight() {
		std::cout << "退会した会員の体重の取得はできません\n";
		return 0;
	}

	//メンバ関数のアクセス権を調整
	using Member::no;
};