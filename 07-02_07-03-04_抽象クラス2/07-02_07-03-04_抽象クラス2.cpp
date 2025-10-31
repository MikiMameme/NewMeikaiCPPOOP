//図形クラス群（その２）の利用例

#include<iostream>
#include"Shape.h"

using namespace std;

int main()
{
	Shape* a[] = {
		new Point(),
		new HorzLine(9),
		new VertLine(6),
		new Rectangle(7,3),
	};

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << "a[" << i << "]\n";
		a[i]->print();
		a[i]->debug();
		cout << '\n';
	}
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		delete a[i];
}