//カウンタクラス

#include<iostream>
#include"Counter.h"

using namespace std;

int main()
{
	int no;
	Counter x;
	Counter y;

	cout << "カウントアップ回数:";
	cin >> no;

	//カウントアップ(xは後置、yは前置)
	for (int i = 0; i < no; i++)
		cout << x++ << ' ' << ++y << '\n';

	cout << "カウントダウン回数:";
	cin >> no;

	//カウントダウン(xは後置、yは前置)
	for (int i = 0; i < no; i++)
		cout << x-- << ' ' << --y << '\n';

	//論理拒否演算子による判定
	if (!x)
		cout << "xは0です\n";
	else
		cout << "xは0ではありません\n";

}