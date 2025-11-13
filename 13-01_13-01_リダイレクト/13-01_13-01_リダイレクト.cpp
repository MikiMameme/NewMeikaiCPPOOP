//2つの整数値を読み込んで加減乗除した値を表示

#include<iostream>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "xとyを加減乗除します\n";

	cout << "xとyの値:";
	cin >> x >> y;

	cout << "x + yは" << x + y << "です\n";
	cout << "x - yは" << x - y << "です\n";
	cout << "x * yは" << x * y << "です\n";
	cout << "x / yは" << x / y << "です\n";
	cout << "x % yは" << x % y << "です\n";
}