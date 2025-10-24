//一般会員クラスと優待会員クラスの利用例

#include<iostream>
#include"Member.h"
#include"VipMember0.h"

using namespace std;

//一般会員の減量
void slim_off(Member& m, double dw)
{
	double weight = m.get_weight();
	if (weight > dw)
		m.set_weight(weight - dw);
}

//優待会員の減量
void slim_off(VipMember0& m, double dw)
{
	double weight = m.get_weight();
	if (weight > dw)
		m.set_weight(weight - dw);
}

int main()
{
	//一般会員
	Member kiritan("東北きりたん", 15, 36.5);
	
	//優待会員
	VipMember0 zunko("東北ずん子", 17, 52.5, "会費全額免除");

	slim_off(kiritan, 0.5);
	cout << "No." << kiritan.no() << ":" << kiritan.name()
		<< "(" << kiritan.get_weight() << "kg)\n";

	slim_off(zunko, 1.0);
	cout << "No." << zunko.no() << ":" << zunko.name()
		<< "(" << zunko.get_weight() << "kg)"
		<< "特典=" << zunko.get_privilege() << '\n';
}