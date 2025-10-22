//�����z��N���X�i���̂Q�j

#pragma once

class IntArray {
	int nelem;
	int* vec;

public:
	explicit IntArray(int size) :nelem(size) { vec = new int[nelem]; }

	~IntArray() { delete[] vec; }

	int size() const { return nelem; }

	int& operator[](int i) { return vec[i]; }
};
