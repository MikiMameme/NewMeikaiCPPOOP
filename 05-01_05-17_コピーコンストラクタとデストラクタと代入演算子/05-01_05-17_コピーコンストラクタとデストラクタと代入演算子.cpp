//基底クラスと派生クラスの代入演算子とデストラクタ

#include <iostream>

using namespace std;

//簡易配列クラス
class Array {
	static const int num = 5;
	int* p;

public:
	//デフォルトコンストラクタ
	Array() :p(new int[num]) { cout << "領域確保\n"; }

	//コピーコンストラクタ
	Array(const Array& x):p(new int[x.num]) {
		for (int i = 0; i < num; i++)p[i] = x.p[i];
		cout << "コピー初期化\n";
	}

	//デストラクタ
	~Array() { delete[] p; cout << "領域解放\n"; }

	//代入演算子
	Array& operator=(const Array& x) {
		for (int i = 0; i < num; i++)p[i] = x.p[i];
		return *this;
	}

	//全要素に値xを代入
	void set(int v) { for (int i = 0; i < num; i++)p[i] = v; }

	//全要素の値を表示
	void print() const { for (int i = 0; i < num; i++)cout << p[i] << ' '; }
};

//配列クラス（派生クラス、コンストラクタを含め何も定義しない）
class ArrayX :public Array {

};

int main()
{
	ArrayX a1;
	a1.set(15);

	ArrayX a2(a1);

	ArrayX a3;
	a3 = a1;

	cout << "配列a1:"; a1.print(); cout << '\n';
	cout << "配列a2:"; a2.print(); cout << '\n';
	cout << "配列a3:"; a3.print(); cout << '\n';
}