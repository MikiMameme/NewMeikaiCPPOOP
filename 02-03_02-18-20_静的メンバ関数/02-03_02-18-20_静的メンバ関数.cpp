//識別番号クラスの利用例（その２）

#include<iostream>
#include"IdNo.h"

using namespace std;

int main()
{
	IdNo a;
	IdNo b;

	cout << "aの識別番号:" << a.id() << '\n';
	cout << "bの識別番号:" << b.id() << '\n';
	cout << "現在までに与えた識別番号の最大値:" << IdNo::get_max_id() << '\n';
}