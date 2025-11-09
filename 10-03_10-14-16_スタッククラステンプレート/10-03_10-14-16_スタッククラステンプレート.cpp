//簡易スタック・クラステンプレートの利用例（文字列の反転）

#include<string>
#include<iostream>
#include"SimpleStack.h"

using namespace std;

int main()
{
	string x;

	cout << "文字列:";
	cin >> x;

	SimpleStack<char> s(x.length());

	try {
		for (int i = 0; i < x.length(); i++)
			s.push(x[i]);

		for (int i = 0; i < x.length(); i++) {
			char c = s.pop();
			cout << c;
		}
		cout << "\n";
	}
	catch (const SimpleStack<char>::Overflow&) {
		cout << "\a満杯の<char>スタックにプッシュしようとしました\n";
	}
	catch (const SimpleStack<char>::Empty&) {
		cout << "\a空の<char>スタックからポップしようとしました\n";
	
	}
}