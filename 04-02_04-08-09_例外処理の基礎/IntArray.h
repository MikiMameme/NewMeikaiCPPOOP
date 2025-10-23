//整数配列クラス（ヘッダ部その４）

#pragma once

class IntArray {
	int nelem;
	int* vec;

public:
	//添字範囲エラー
	class IdxRngErr {
	private:
		const IntArray* ident;
		int idx;
	public:
		IdxRngErr(const IntArray* p, int i) :ident(p), idx(i) { }
		int index() const{return idx; }
	};

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
	int& operator[](int i) {
		if (i < 0 || i >= nelem)
			throw IdxRngErr(this, i);
		return vec[i]; 
	}

	//const添字演算子
	const int& operator[](int i) const {
		if (i < 0 || i >= nelem)
			throw IdxRngErr(this, i);
		return vec[i]; 
	}
};