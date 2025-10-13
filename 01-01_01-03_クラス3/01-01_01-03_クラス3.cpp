//会計クラスとその利用例

#include<string>
#include<iostream>

using namespace std;

class Accounting {
private:
	string full_name;
	long crnt_asset;

public:
	
	//コンストラクタ
	Accounting(string name, long asset) {
		full_name = name;
		crnt_asset = asset;
	}

	//氏名を調べる
	string name() {
		return full_name;
	}

	//資産を調べる
	long asset() {
		return crnt_asset;
	}

	//収入がある
	void earn(long yen) {
		crnt_asset += yen;
	}

	//支出がある
	void spend(long yen) {
		crnt_asset -= yen;
	}
};


int main()
{
	Accounting nakano("中野隼人", 1000);
	Accounting yamada("山田宏文", 200);

	nakano.spend(200);
	yamada.earn(100);

	cout << "■中野:\"" << nakano.name() << "\" " << nakano.asset() << "円\n";
	cout << "■山田:\"" << yamada.name() << "\" " << yamada.asset() << "円\n";
}