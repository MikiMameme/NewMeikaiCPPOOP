//スタック抽象クラステンプレートの利用例（その１ 配列版スタック）

#include<iostream>
#include"Stack.h"
#include"ArrayStack.h"

using namespace std;

int main()
{
	Stack<int>* s = new ArrayStack<int>();

	while (1) {
		int menu;
		cout << "（１）プッシュ （２）ポップ （０）終了:";
		cin >> menu;
		if (menu == 0)break;

		switch (menu) {
			int x;

			//プッシュ
		case 1: cout << "データ:";
			cin >> x;
			try {
				s->push(x);
			}
			catch (const Stack<int>::Overflow&) {
				cout << "\aオーバーフローしました\n";
			}
			break;

			//ポップ
		case 2: try {
			x = s->pop();
			cout << "ポップしたデータは" << x << "です\n";
		}
			  catch (const Stack<int>::Empty&) {
				  cout << "\aスタックは空です\n";
			  }
			  break;
		}
	}
	delete s;
}