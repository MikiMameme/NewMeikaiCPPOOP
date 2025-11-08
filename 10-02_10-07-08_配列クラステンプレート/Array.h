//配列クラステンプレートArray
#pragma once

//配列クラステンプレート
template<class Type> class Array {
	int nelem;
	Type* vec;

	bool is_valid_index(int idx) { return idx >=  0 && idx < nelem; }

public:
	//添字範囲エラー
	class IdxRngErr {
		const Array* ident;
		int idx;
	public:
		IdxRngErr(const Array* p, int i):ident(p),idx(i){}
		int Index()const { return idx; }
	};

	//明示的コンストラクタ
	explicit Array(int size, const Type& v = Type()) :nelem(size) {
		vec = new Type[nelem];
		for (int i = 0; i < nelem; i++)
			vec[i] = v;
	}

	//コピーコンストラクタ
	Array(const Array<Type>& x) {
		if (&x == this) {
			nelem = 0;
			vec = NULL;
		}
		else {
			nelem = x.nelem;
			vec = new Type[nelem];
			for (int i = 0; i < nelem; i++)
				vec[i] = x.vec[i];
		}
	}

	//デストラクタ
	~Array() { delete[] vec; }

	//要素数を返す
	int size()const { return nelem; }

	//代入演算子
	Array& operator=(const Array<Type>& x) {
		if (&x != this) {
			if (nelem != x.nelem) {
				delete[]vec;
				nelem = x.nelem;
				vec = new Type[nelem];
			}
			for (int i = 0; i < nelem; i++)
				vec[i] = x.vec[i];
		}
		return *this;
	}

	//添字演算子
	Type& operator[](int i) {
		if (!is_valid_index(i))
			throw IdxRngErr(this, i);
		return vec[i];
	}

	//const版添字演算子
	const Type& operator[](int i)const {
		if (!is_valid_index(i))
			throw IdxRngErr(this, i);
		return vec[i];
	}
};
