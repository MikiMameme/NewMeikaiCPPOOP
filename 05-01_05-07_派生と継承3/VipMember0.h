//優待会員クラス（ヘッダ部）

#pragma once
#include<string>

//優待クラス
class VipMember0 {
	std::string full_name;
	int number;
	double weight;
	std::string privilege;

public:
	//コンストラクタ
	VipMember0(const std::string& name, int no, double w, const std::string& prv);

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

	//優待会員特典取得
	std::string get_privilege() const { return privilege; }

	//特典設定
	void set_privilege(const std::string& prv) {
		privilege = (prv != " ") ? prv : "未登録";
	}
};