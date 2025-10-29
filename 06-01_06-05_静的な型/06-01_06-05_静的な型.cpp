//会員情報表示（優待会員と長寿会員に対して一般会員のprintを呼び出す）

#include<iostream>
#include"Member.h"
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

//会員情報表示（体重65kg以上の会員に●をつける）
void put_member(const Member& m)
{
	cout << (m.get_weight() >= 65 ? "●" : " ");
	m.print();
}

int main()
{
	Member ichiro("佐藤一郎", 15, 75.2);
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");
	SeniorMember hanako("鈴木花子", 43, 63.7, 3);

	put_member(ichiro);
	put_member(taro);
	put_member(hanako);
}