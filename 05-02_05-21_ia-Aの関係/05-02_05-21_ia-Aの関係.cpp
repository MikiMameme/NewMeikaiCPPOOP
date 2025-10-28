//一般会員クラスと優待会員クラスの利用例

#include<iostream>
#include"Member.h"
#include"VipMember.h"

using namespace std;

void slim_off(Member& m, double dw)
{
	double weight = m.get_weight();
	if (weight > dw)
		m.set_weight(weight - dw);
}

int main()
{
	Member kiritan("東北きりたん", 15, 40.3);
	slim_off(kiritan, 0.3);

	VipMember zunko("東北ずん子", 17, 52.5, "会費全額免除");
	slim_off(zunko, 0.5);

	cout << "No." << kiritan.no() << ":" << kiritan.name()
		<< "(" << kiritan.get_weight() << "kg)\n";

	cout << "No." << zunko.no() << ":" << zunko.name()
		<< "(" << zunko.get_weight() << "kg)"
		<< "特典=" << zunko.get_privilege() << '\n';
}