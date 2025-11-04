//仮想基底クラスと非仮想基底クラスの構築と解体

#include<iostream>

using namespace std;

class V1 {
public:
	V1() { cout << "V1を構築\n"; }
	~V1() { cout << "V1を解体\n"; }
};

class V2 {
public:
	V2() {cout<< "V2を構築\n"; }
	~V2() { cout << "V2を解体\n"; }
};

class X :virtual public V1, virtual public V2 {
public:
	X() { cout << "Xを構築\n"; }
	~X() { cout << "Xを解体\n"; }
};

class Y :virtual public V2, virtual public V1 {
public:
	Y() { cout << "Yを構築\n"; }
	~Y() { cout << "Yを解体\n"; }
};

class Z :public X, public Y {
public:
	Z() { cout << "Zを構築\n"; }
	~Z() { cout << "Zを解放\n"; }
};

int main()
{
	Z dummy;
	cout << "--------\n";
}