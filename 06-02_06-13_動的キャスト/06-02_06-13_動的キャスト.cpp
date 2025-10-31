//動的キャストと失敗時の挙動

#include<iostream>
#include<typeinfo>

using namespace std;

//基底クラス
class Base {
	virtual void f() {}
};


//派生クラス　
class Derived :public Base {};

int main()
{
	Base bs;
	Derived dv;

	Derived* p1 = dynamic_cast<Derived*>(&bs);
	cout << "p1=" << p1 << '\n';

	Derived* p2 = dynamic_cast<Derived*>(&dv);
	cout << "p2=" << p2 << '\n';

	try {
		Derived& r1 = dynamic_cast<Derived&>(bs);
		cout << "r1はbaを参照しています\n";
	}
	catch (bad_cast) {
		cout << "bsのキャストに失敗しました\n";
	}

	try {
		Derived& r2 = dynamic_cast<Derived&>(dv);
		cout << "r2はdvを参照しています\n";
	}
	catch (bad_cast) {
		cout << "dvのキャストに失敗しました\n";
	}
}