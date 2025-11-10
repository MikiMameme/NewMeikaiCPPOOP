//スタッククラステンプレート（要素数固定の配列による実現 ArrayStack.h）

#pragma once
#include"Stack.h"

//要素数固定の配列によるスタッククラステンプレート
template<class Type> class ArrayStack :public Stack<Type> {
	static const int size = 10;
	int ptr;
	Type stk[size];

public:
	//コンストラクタ
	ArrayStack():ptr(0){}
	//デストラクタ
	~ArrayStack(){}
	//プッシュ
	void push(const Type& x) {
		if (ptr >= size)
			throw Stack<Type>::Overflow();
		stk[ptr++] = x;
	}
	//ポップ
	Type pop() {
		if (ptr <= 0)
			throw Stack<Type>::Empty();
		return stk[--ptr];
	}
};