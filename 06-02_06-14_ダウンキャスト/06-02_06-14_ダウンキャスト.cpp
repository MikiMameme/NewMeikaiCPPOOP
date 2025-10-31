//dynamic_cast演算子によるダウンキャストの例

#include<iostream>
#include<typeinfo>
#include"Member.h"
#include"VipMember.h"
#include"SeniorMember.h"

using namespace std;

//長寿会員のみの情報を表示
//スポーツクラブと併設のデイサービスの会員情報があると想定、長寿会員はデイサービス利用者とする
void senior_print(Member* p)
{
	SeniorMember* d = dynamic_cast<SeniorMember*>(p);
	if (d)
		d->print();
}

int main()
{
	Member ichiro("佐藤一郎", 15, 75.2);
	VipMember taro("田中太郎", 17, 89.2, "会費全額免除");
	SeniorMember hanako("鈴木花子", 43, 63.7, 3);

	senior_print(&ichiro);
	senior_print(&taro);
	senior_print(&hanako);
}