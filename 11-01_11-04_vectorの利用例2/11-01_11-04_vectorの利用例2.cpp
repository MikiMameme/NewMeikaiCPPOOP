//ベクトルの利用例

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>x;

	cout << "整数を入力せよ\n※終了は9999\n";

	while (true) {
		int temp;
		cin >> temp;
		if (temp==9999)break;
		x.push_back(temp);
	}

	cout << "先頭データは" << x.front() << "です\n";
	cout << "末尾から逆順に1個ずつ取り出して空にします\n";
	while (x.size()) {
		cout << x.back() << " ";
		x.pop_back();
	}
	cout << '\n';
}