//会員情報表示（ポインタを通じたメンバ関数の呼び出し）

#include<iostream>
#include"Member.h"
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

//会員情報表示（体重65kg以上の会員に●をつける）
void put_member(const Member* p)
{
	cout << (p->get_weight() >= 65 ? "●" : " ");
	p->print();
}

int main()
{
	Member ichiro("佐藤一郎", 15, 75.2);
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");
	SeniorMember hanako("鈴木花子", 43, 63.7, 3);

	put_member(&ichiro);
	put_member(&taro);
	put_member(&hanako);
}