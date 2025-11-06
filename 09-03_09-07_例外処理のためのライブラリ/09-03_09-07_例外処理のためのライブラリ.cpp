//bad_exeption例外、VisualC++系ではエラーになる

#include<iostream>
#include<exception>

using namespace std;

void func() throw(int)
{
	throw 3.14;
}

void my_handler()
{
std:cout << "例外指定されいない例外が送出されました\n";
}

int main()
{
	try {
		throw bad_exception();
	}
	catch (const bad_exception& e) {
		cout << "bad_exceptionを捕捉:エラー内容は" << e.what() << '\n';
	}

	set_unexpected(my_handler);
	func();
}