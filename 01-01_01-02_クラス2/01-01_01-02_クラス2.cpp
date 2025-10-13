//会計クラスとその利用例

#include<string>
#include<iostream>

using namespace std;

class Accounting {
public:
	string name;
	long asset;
};

int main()
{
	Accounting nakano;
	Accounting yamada;

	nakano.name = "中野隼人";
	nakano.asset = 1000;

	yamada.name = "山田宏文";
	yamada.asset = 200;

	nakano.asset -= 200;
	yamada.asset += 100;

	cout << "■中野:\"" << nakano.name << "\" " << nakano.asset << "円\n";
	cout << "■山田:\"" << yamada.name << "\" " << yamada.asset << "円\n";
}