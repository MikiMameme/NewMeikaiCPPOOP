//優待会員クラス（ソース部）

#include<iostream>
#include"VipMember0.h"

using namespace std;

//コンストラクタ
VipMember0::VipMember0(const string& name, int no, double w, const string& prv)
	: full_name(name), number(no)
{
	set_weight(w);
	set_privilege(prv);
}

//会員情報表示
void VipMember0::print() const
{
	cout << "No." << number << ":" << full_name << "(" << weight << "kg)"
		<< "特典=" << privilege << '\n';
}