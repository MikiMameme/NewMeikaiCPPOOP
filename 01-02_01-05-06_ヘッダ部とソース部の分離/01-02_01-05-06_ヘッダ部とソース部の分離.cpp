//会計クラス(ソース部)

#include<string>
#include<iostream>

#include "Accounting.h"

using namespace std;

//コンストラクタ
Accounting::Accounting(string name, long amnt)
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