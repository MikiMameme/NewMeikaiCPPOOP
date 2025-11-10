//スタッククラステンプレート（vectorによる実現、VectorStack.h）

#pragma once
#include<vector>
#include"Stack.h"

//スタッククラステンプレート
template<class Type> class VectorStack :public Stack<Type> {
	std::vector<Type> stk;

public:
	//コンストラクタ
	VectorStack(){}
	//デストラクタ
	~VectorStack(){}
	//プッシュ
	void push(const Type& x) {
		try {
			stk.push_back(x);
		}
		catch (...) {
			throw Stack<Type>::Overflow();
		}
	}

	//ポップ
	Type pop() {
		if (stk.empty())
			throw Stack<Type>::Empty();
		Type x = stk.back();
		stk.pop_back();
		return x;
	}
};