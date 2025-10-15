//会計クラスの利用例

#include<iostream>
#include"Accounting.h"

using namespace std;

int main()
{
	Accounting nakano("中野隼人", 1000, 2125, 1, 24);
	Accounting yamada("山田宏文", 200, 2123, 7, 15);

	nakano.spend(200);
	yamada.earn(100);

	cout << "中野くん\n";
	cout << "氏名=" << nakano.name() << '\n';
	cout << "資産=" << nakano.asset() << "円\n";
	cout << "誕生日=" << nakano.birthday().year() << "年"
		<< nakano.birthday().month() << "月"
		<< nakano.birthday().day() << "日\n";

	cout << "\n山田くん\n";
	cout << "氏名=" << yamada.name() << '\n';
	cout << "資産=" << yamada.asset() << "円\n";
	cout << "誕生日=" << yamada.birthday() << '\n';
}