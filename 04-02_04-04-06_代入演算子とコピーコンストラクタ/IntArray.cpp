//整数配列クラス（ソース部その３）

#include<iostream>
#include"IntArray.h"

//コピーコンストラクタ
IntArray::IntArray(const IntArray& x)
{
	if (&x == this) {
		nelem = 0;
		vec = NULL;
	}
	else {
		nelem = x.nelem;
		vec = new int[nelem];
		for (int i = 0; i < nelem; i++)
			vec[i] = x.vec[i];
	}
}

//代入演算子
IntArray& IntArray::operator=(const IntArray& x)
{
	if (&x != this) {
		if (nelem != x.nelem) {
			delete[] vec;
			nelem = x.nelem;
			vec = new int[nelem];
		}
		for (int i = 0; i < nelem; i++)
			vec[i] = x.vec[i];
	}
	return *this;
}