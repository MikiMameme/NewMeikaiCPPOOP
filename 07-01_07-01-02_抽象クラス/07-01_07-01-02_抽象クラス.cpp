//図形クラス群（その１）の利用例

#include<iostream>
#include"Shape.h"

using namespace std;

int main()
{
	Shape* a[2];

	a[0] = new Point;
	a[1] = new Rectangle(7, 3);

	for (int i = 0; i < 2; i++) {
		cout << "a[" << i << "]\n";
		a[i]->draw();
		cout << '\n';
	}

	delete a[0];
	delete a[1];
}
