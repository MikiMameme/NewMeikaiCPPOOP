//一般会員クラス（ヘッダ部その１）

#pragma once
#include<string>

//一般会員クラス
class Member {
	std::string full_name;
	int number;
	double weight;

public:
	//コンストラクタ
	Member(const std::string& name, int no, double w);

	//氏名取得
	std::string name() const { return full_name; }

	//会員番号取得
	int no() const { return number; }

	//体重取得
	double get_weight() { return weight; }

	//体重設定
	void set_weight(double w) { weight = (w > 0) ? w : 0; }

	//会員情報表示 
	void print() const;
};
