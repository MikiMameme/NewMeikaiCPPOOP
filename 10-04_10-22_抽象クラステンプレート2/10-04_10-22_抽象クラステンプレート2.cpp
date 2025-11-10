//スタック抽象クラステンプレートの利用例（その２）
//配列・線形リスト・ベクトルから好きなものを選択できる

#include<iostream>
#include"Stack.h"
#include"ArrayStack.h"
#include"ListStack.h"
#include"VectorStack.h"

using namespace std;

enum StackType { ArraySTK, ListSTK, VectorSTK };

//SWに応じた数のスタックを生成
template <class Type>
Stack<Type>* generate_stack(StackType sw)
{
	switch (sw) {
	case ArraySTK:return new ArrayStack<Type>();
	case ListSTK:return new ListStack<Type>();
	default:return new VectorStack<Type>();
	}
}

//すべてのデータをポップして表示
template<class Type>
void pop_all(Stack<Type>& s)
{
	cout << "{";
	try {
		while (1)
			cout << s.pop() << " ";
	}
	catch (const Stack<Type>::Empty&) {
		;
	}
	cout << "}";
}

int main()
{
	int type;
	do {
		cout << "スタックの種類（0.配列 / 1.リスト / 2.Vector）:";
		cin >> type;
	} while (type < 0 || type>2);

	//typeに応じた型のスタックを生成
	Stack<int>* s = generate_stack<int>(static_cast<StackType>(type));

	while (1) {
		int menu;
		cout << "(1)プッシュ (2)ポップ (3)全ポップ＆表示 (0)終了:";
		cin >> menu;
		if (menu == 0)break;
		switch (menu) {
			int x;
		case 1: cout << "データ:";
			cin >> x;
			try {
				s->push(x);
			}
			catch (const Stack<int>::Overflow&) {
				cout << "\aオーバーフローしました\n";
			}
			break;

		case 2: try {
			x = s->pop();
			cout << "ポップしたデータは" << x << "です\n";
		}
			  catch (const Stack<int>::Empty&) {
				  cout << "\aスタックは空です\n";
			  }
			  break;

		case 3: pop_all(*s);
			cout << '\n';
			break;
		}
	}
	delete s;
}