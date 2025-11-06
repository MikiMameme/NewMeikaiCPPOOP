//new演算子による記憶域の確保失敗時の挙動を変える

#include<iostream>
#include<cstdlib>
#include<new>

using namespace std;

void new_error()
{
	cout << "new演算子による記憶域の確保に失敗しました\n";
	abort();
}

int main()
{
	set_new_handler(new_error);

	while (true)		//恣意的に例外を発生されるはずなのだが、
		new char[10000]; //例外発生まで動く保証無し。このコードは推奨されないと思われる
}