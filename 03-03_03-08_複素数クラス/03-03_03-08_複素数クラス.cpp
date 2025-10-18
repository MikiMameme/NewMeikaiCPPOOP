//参照オブジェクトの参照先を検証

#include<iostream>

using namespace std;

int main()
{
	double d = 1.0;
	const int& p = 5;
	const int& q = d;

	const_cast<int&>(q) = 3.14;

	cout << "d=" << d << '\n';
	cout << "p=" << p << '\n';
	cout << "q=" << q << '\n';
}