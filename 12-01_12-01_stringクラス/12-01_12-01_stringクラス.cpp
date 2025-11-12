//stringとwstringの型名を表示

#include<string>
#include<typeinfo>
#include<iostream>

using namespace std;

int main()
{
	cout << "typeid(string).name()=" << typeid(string).name() << "\n\n";
	cout << "typeid(wstring).name()=" << typeid(wstring).name() << '\n';
}