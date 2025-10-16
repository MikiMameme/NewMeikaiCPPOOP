//会計クラス（その６、ソース部）

#include<iostream>
#include<string>
#include"Accounting.h"

using namespace std;

//コンストラクタ
Accounting::Accounting(const string& name, long amnt, const Date& op) :
	full_name(name), crnt_asset(amnt), birth(op)
{
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