//長寿会員クラス（ソース部）

#include<iostream>
#include<string>
#include"SeniorMember.h"

using namespace std;

//コンストラクタ
SeniorMember::SeniorMember(const string& name, int no, double w, int level)
	:Member(name, no, w)
{
	set_care_level(level);
}

//会員情報表示
void SeniorMember::print() const
{
	cout << "No." <<no()<< ":" << name() << "(" << get_weight() << "kg)"
		<< "要介護度=" << care_level << '\n';
}