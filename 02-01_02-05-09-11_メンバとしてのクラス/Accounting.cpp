//会計クラス（ソース部分）

#include<iostream>
#include<string>
#include"Accounting.h"

using namespace std;

//コンストラクタ
Accounting::Accounting(const string& name, long amnt, int y, int m, int d)
	:birth(y, m, d)
{
	full_name = name;
	crnt_asset = amnt;
}

//収入がある
void Accounting::earn(long amnt)
{
	crnt_asset += amnt;
}

//支出がある
void Accounting::spend(long amnt)
{
	crnt_asset -= amnt;
}