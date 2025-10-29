//基底クラスへのポインタ・参照が指す・参照するオブジェクトの型

#include<typeinfo>
#include<iostream>
#include"Member.h"
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

int main()
{
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");

	Member* ptr = &taro;
	Member& ref = taro;

	cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです\n";
	cout << "refの参照先は" << typeid(ref).name() << "型のオブジェクトです\n";
}