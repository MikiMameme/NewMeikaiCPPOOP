//初期化と代入・値渡しと参照渡しの検証

#include<iostream>

using namespace std;

//検証用クラス
class Test {
public:
	Test() {
		//デフォルトコンストラクタ
		cout << "初期化:Test()\n";
	}
	Test(const Test& t) {
		//コピーコンストラクタ
		cout << "初期化:Test(const Test&)\n";
	}
	Test& operator=(const Test& t) {
		//代入演算子
		cout<<"代入:Test=Test\n";return *this;
	}
};

//値渡し
void value(Test a){ }

//参照渡し
void reference(Test& a){ }

int main()
{
	Test x;
	Test y = x;
	Test z(x);
	y = x;
	value(x);
	reference(x);
}
