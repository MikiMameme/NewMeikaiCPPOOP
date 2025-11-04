//例外を再送出

#include<iostream>

using namespace std;

//読み込んだ値に応じて例外を送出・再送出
void func()
{
	int x;
	cout << "整数値を入力せよ:";
	cin >> x;

	try {
		switch (x) {
		case 1: throw 1;
		case 7: throw 7.0;
		case 99: throw "99例外";
		}
	}

	catch (int) {
		cout << "func:int型の例外を捕捉しました\n";
	}

	catch (double) {
		cout << "func:double型の例外を捕捉しました\n";
		throw"ラッキーセブン";
	}

	catch (const char*) {
		cout << "func:文字列型の例外を捕捉しました\n";
		throw;
	}
}

int main()
{
	try {
		func();
	}
	catch (const char* str) {
		cout << "main:文字列\"" << str << "\"を捕捉\n";
	}
}