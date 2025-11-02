//多重継承（基底クラスの初期化・曖昧さの制御を検証）

#include<iostream>

using namespace std;

//基底クラス
class Base1 {
public:
	int x;

	Base1(int a = 0) :x(a) {
		cout << "Base1::xを" << x << "に初期化しました\n";
	}
	void print() { cout << "Base1クラスです:x=" << x << '\n'; }
};

//基底クラス２
class Base2 {
public:
	int x;
	Base2(int a = 0) :x(a) {
		cout << "Base2::xを" << x << "に初期化しました\n";
	}
	void print() { cout << "Base2クラスです:x=" << x << '\n'; }
};

//派生クラス
class Derived :public Base1, public Base2 {
	int y;
public:
	Derived(int a, int b, int c) :y(c), Base2(a), Base1(b) {
		cout << "Derived::yを" << y << "に初期化しました\n";
	}
	void func(int a, int b) {
		Base1::x = a;
		Base2::x = b;
	}
};

int main()
{
	Derived z(1, 2, 3);

	z.func(1, 2);
	z.Base1::print();
	z.Base2::print();
}