//private派生とメンバのアクセス性（注：コンパイルエラーになる場合あり）

#include"Super.h"

class Sub :private Super {
	void f() {
		//pri = 1; //クラス内部からもアクセスできないためコメント化
		pro = 1;
		pub = 1;
	}
};

int main()
{
	Sub x;

	//x.pri = 1; //クラス外部からは
	//x.pro = 1; //アクセスできないため
	//x.pub = 1; //コメント化している
}