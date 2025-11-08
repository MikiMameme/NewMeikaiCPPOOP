//二値クラステンプレートTwinの使用例

#include<string>
#include<iostream>
#include"Twin.h"

using namespace std;

int main()
{
	const Twin<int> t1(15, 37);
	cout << "t1=" << t1 << "\n";

	Twin<string>t2("ABC", "XYZ");
	cout << "t2=" << t2 << "\n";

	cout << "t2の値を変更します\n";
	cout << "新しい第一値:"; cin >> t2.first();
	cout << "新しい第二値:"; cin >> t2.second();

	if (!t2.ascending()) {
		cout << "第一値＜第二値が成立しませんのでソートします\n";
		t2.sort();
		cout << "t2は" << t2 << "に変更されました\n";
	}
}