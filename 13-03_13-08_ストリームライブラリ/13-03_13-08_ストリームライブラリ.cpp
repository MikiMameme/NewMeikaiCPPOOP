//ストリームに対する幅の設定

#include<iostream>

using namespace std;

int main()
{
	char str[10];

	cout << "文字列を10文字未満で入力せよ:";
	cin.width(10);
	cin >> str;

	cout << "str="; cout.width(12); cout << str << '\n';
	cout << "str=" << str << '\n';
}