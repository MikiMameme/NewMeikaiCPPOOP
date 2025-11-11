//ポインタによる配列要素の走査

#include<iostream>

using namespace std;

int main()
{
	int a[5];
	int value = 0;

	//先頭から末尾へと走査して値を代入
	for (int* p = &a[0]; p != &a[5]; p++)
		*p = ++value;

	//先頭から末尾へと走査して値を表示
	for (const int* p = &a[0]; p != &a[5]; p++)
		cout << *p << ' ';
	cout << '\n';
}