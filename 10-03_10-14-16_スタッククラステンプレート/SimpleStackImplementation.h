//簡易スタック・クラステンプレート（ソース部分）
#pragma once

//明示的コンストラクタ
template<class Type>
SimpleStack<Type>::SimpleStack(int sz) : size(sz), ptr(0)
{
	stk = new Type[size];
}

//デストラクタ
template<class Type>
SimpleStack<Type>::~SimpleStack()
{
	delete[] stk;
}

//プッシュ
template<class Type>
Type& SimpleStack<Type>::push(const Type& x)
{
	if (ptr >= size)
		throw Overflow();
	return stk[ptr++] = x;
}

//ポップ
template<class Type>
Type SimpleStack<Type>::pop()
{
	if (ptr <= 0)
		throw Empty();
	return stk[--ptr];
}