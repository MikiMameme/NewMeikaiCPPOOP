//整数配列クラス（ヘッダー部）

#pragma once

class IntArray {
	int nelem;
	int* vec;

public:
	IntArray(int size) :nelem(size) { vec = new int[nelem]; }

	int size()const { return nelem; }
	
	int& operator[](int i) { return vec[i]; }

};