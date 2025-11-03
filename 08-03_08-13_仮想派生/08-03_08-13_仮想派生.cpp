//派生クラスオブジェクトに含まれる仮想基底クラス部分オブジェクトは1個のみ

#include<iostream>

using namespace std;

//クラスA
class A {
	int a;
public:
	A():a(0){ }
	int get_a() { return a; }
	void set_a(int v) { a = v; }
};

//クラスX
class X : virtual public A {
public:
	int get_a() { return A::get_a(); }
	void set_a(int v) { A::set_a(v); }
};

//クラスY
class Y :virtual public A {
public:
	int get_a() { return A::get_a(); }
	void set_a(int v) { A::set_a(v); }
};

//クラスZ
class Z :public X, public Y {
	//ここでは何も定義しない
};

int main()
{
	Z obj;

	cout << "X::get_a()=" << obj.X::get_a() << '\n';
	cout << "Y::get_a()=" << obj.Y::get_a() << '\n';

	obj.X::set_a(5);

	cout << "X::get_a()=" << obj.X::get_a() << '\n';
	cout << "Y::get_a()=" << obj.Y::get_a() << '\n';
}