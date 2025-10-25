//派生クラスの利用例

#include<iostream>
#include"BaseDerived.h"

using namespace std;

int main()
{
	Derived dv(1, 2, 3);

	cout << "dv.func()\n"; dv.func();

	cout << "dv.method()\n"; dv.method();
}