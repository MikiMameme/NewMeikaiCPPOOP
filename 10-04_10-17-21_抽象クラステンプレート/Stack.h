//スタック 抽象クラステンプレート

#pragma once

//スタック抽象クラステンプレート
template<class Type>class Stack {
public:
	//満杯スタックへのプッシュに対する例外
	class Overflow{};
	//空のスタックからのポップに対する例外
	class Empty{};
	//デストラクタ
	virtual ~Stack() = 0;
	//プッシュ
	virtual void push(const Type&) = 0;
	//ポップ
	virtual Type pop() = 0;
};

//デストラクタ
template<class Type>Stack<Type>::~Stack(){}