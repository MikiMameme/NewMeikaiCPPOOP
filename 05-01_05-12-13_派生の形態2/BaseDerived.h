//基底クラスと派生クラス

#pragma once
#include<iostream>

//基底クラス
class Base {
	int a;
	int b;

public:
	Base(int aa, int bb):a(aa), b(bb){ }
	void func() const {
		std::cout << "a=" << a << '\n';
		std::cout << "b=" << b << '\n';
	}
};


//派生クラス
class Derived :public Base {
	int x;

public:
	Derived(int aa, int bb, int xx): Base(aa,bb),x(xx){ }
	void method() const {
		func();
		std::cout << "x=" << x << '\n';
	}
};