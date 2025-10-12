//中野くんと山田くんの合計

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string nakano_name = "中野隼人";
	long nakano_asset = 1000;

	string yamada_name = "山田宏文";
	long yamada_asset = 200;
	
	//中野くん200円の支出
	nakano_asset -= 200;

	//山田くん100円の収入
	yamada_asset += 100;

	cout << "■中野 :\"" << nakano_name << "\" " << nakano_asset << "円\n";
	cout << "■山田 :\"" << yamada_name << "\" " << yamada_asset << "円\n";
}