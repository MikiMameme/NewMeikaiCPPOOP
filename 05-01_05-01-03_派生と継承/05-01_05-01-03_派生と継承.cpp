//一般会員クラスの利用例（その１）

#include<iostream>
#include"Member.h"

using namespace std;

int main()
{
	Member kiritan("東北きりたん", 15, 36.5);

	double weight = kiritan.get_weight();
	kiritan.set_weight(weight - 0.2);

	cout << "会員番号" << kiritan.no() << "の" << kiritan.name()
		<< "は" << kiritan.get_weight() << "kgです\n";

}