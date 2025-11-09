//簡易スタック・テンプレート（ヘッダ部分）
#pragma once

//スタック・クラステンプレート
template<class Type>class SimpleStack {
	Type* stk;
	int size;
	int ptr;

	SimpleStack(const SimpleStack<Type>&);
	SimpleStack& operator=(const SimpleStack<Type>&);

public:
	//満杯スタックへのプッシュに対する例外
	class Overflow{ };

	//空のスタックからのポップに対する例外
	class Empty{ };

	//明示的コンストラクタ
	explicit SimpleStack(int sz);

	//デストラクタ
	~SimpleStack();

	//プッシュ
	Type& push(const Type& x);

	//ポップ
	Type pop();

};

//ソース部をインクルード
#include "SimpleStackImplementation.h"