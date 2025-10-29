//会員情報表示（優待会員と長寿会員に対して一般会員のprintを呼び出す）

#include<iostream>
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

int main()
{
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");
	SeniorMember hanako("鈴木花子", 43, 63.7, 3);

	taro.Member::print();
	hanako.Member::print();
}