//継承とデストラクタ

#include<iostream>

using namespace std;

//基底クラス
class Base {
public:
	Base() { cout << "Baseのコンストラクタ\n"; }
	virtual ~Base() { cout << "Baseのデストラクタ\n"; }

};

//派生クラス
class Derived :public Base {
	int* a;
public:
	Derived() { a = new int[10]; cout << "配列を生成\n"; }
	~Derived() { delete[] a; cout << "配列を解放\n"; }
};

int main()
{
	Base* ptr = new Derived;
	delete ptr;
}