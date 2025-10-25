//スライシング

#include<iostream>
#include"BaseDerived.h"

using namespace std;

int main()
{
	Base bs(99, 99);

	cout << "BSの初期状態\n";
	bs.func();

	Derived dv(1, 2, 3);

	bs = dv;
	cout << "dvを代入した後\n";
	bs.func();

	//dv = bs;  //これは代入不可のためコメント化している
}