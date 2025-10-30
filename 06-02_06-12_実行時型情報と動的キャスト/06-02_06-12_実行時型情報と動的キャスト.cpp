//基底クラス

#include<iostream>
#include<typeinfo>
#include"Member.h"
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

//ptrが指す先の参照先の型情報を表示
void ptr_ref(const Member* ptr, const Member& ref)
{
	cout << "ptrが指す先は" << typeid(*ptr).name() << "型オブジェクトです\n";
	cout << "refの参照先は" << typeid(ref).name() << "型オブジェクトです\n";
}

int main()
{
	Member ichiro("佐藤一郎", 15, 75.2);
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");
	SeniorMember hanako("鈴木花子", 43, 63.7, 3);

	cout << ichiro.name() << '\n'; ptr_ref(&ichiro, ichiro);
	cout << taro.name() << '\n'; ptr_ref(&taro, taro);
	cout << hanako.name() << '\n'; ptr_ref(&hanako,hanako);
}