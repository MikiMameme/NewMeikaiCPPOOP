//会計クラスの利用例

#include<string>
#include<iostream>
#include"Accounting.h"

using namespace std;

//会計情報を表示
void print_Accounting(string title, Accounting* p)
{
	cout << title << "\"" << p->name() << "\"" << p->asset() << "円\n";
}

int main()
{
	Accounting nakano("中野隼人", 1000);
	Accounting yamada("山田宏文", 200);

	nakano.spend(200);
	yamada.earn(100);

	print_Accounting("■中野:", &nakano);
	print_Accounting("■山田:", &yamada);
}