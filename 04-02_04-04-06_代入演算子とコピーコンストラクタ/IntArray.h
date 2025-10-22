//整数配列クラス（ヘッダ部その３）

#pragma once

class IntArray {
	int nelem;
	int* vec;

public:
	
	//明示的コンストラクタ
	explicit IntArray(int size) :nelem(size) { vec = new int[nelem]; }

	//コピーコンストラクタ
	IntArray(const IntArray& x);

	//デストラクタ
	~IntArray() { delete[] vec; }

	//要素数を返す
	int size() const { return nelem; }

	//代入演算子
	IntArray& operator=(const IntArray& x);

	//添字演算子
	int& operator[](int i) { return vec[i]; }

	//const添字演算子
	const int& operator[](int i) const { return vec[i]; }
};