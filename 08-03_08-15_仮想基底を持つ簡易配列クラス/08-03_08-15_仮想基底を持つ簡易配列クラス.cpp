//簡易配列クラス（仮想基底クラスの応用例）

#include<iostream>

using namespace std;

//バッファ
class Buf {
	int a[5];
protected:
	int element(int i)const { return a[i]; }
	int& element(int i) { return a[i]; }
};

//読み込みのみ可能なバッファ
class InBuf :virtual public Buf {
public:
	int get(int i)const { return element(i); }
};

//書き込みのみ可能なバッファ
class OutBuf :virtual public Buf {
public:
	void put(int i, int v) { element(i) = v; }
};

//読み込み・書き込み可能なバッファ
class IOBuf :public InBuf, public OutBuf {
	//ここでは何も定義しない
};

int main()
{
	IOBuf a;
	
	for (int i = 0; i < 5; i++)
		a.put(i, i * 10);

	for (int i = 0; i < 5; i++)
		cout << a.get(i) << " ";
	cout << '\n';
}