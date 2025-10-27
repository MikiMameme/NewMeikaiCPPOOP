//優待会員クラスの利用例

#include<iostream>
#include"VipMember.h"

using namespace std;

int main()
{
	VipMember zunko("東北ずん子", 17, 52.5, "会費全額免除");

	double weight = zunko.get_weight();
	zunko.set_weight(weight + 0.5);

	cout << "会員番号" << zunko.no() << "の" << zunko.name()
		<< "は" << zunko.get_weight() << "kgで"
		<< "特典は" << zunko.get_privilege() << "です\n";
}