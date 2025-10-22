//�����z��N���X�i�w�b�_�����̂R�j

#pragma once

class IntArray {
	int nelem;
	int* vec;

public:
	
	//�����I�R���X�g���N�^
	explicit IntArray(int size) :nelem(size) { vec = new int[nelem]; }

	//�R�s�[�R���X�g���N�^
	IntArray(const IntArray& x);

	//�f�X�g���N�^
	~IntArray() { delete[] vec; }

	//�v�f����Ԃ�
	int size() const { return nelem; }

	//������Z�q
	IntArray& operator=(const IntArray& x);

	//�Y�����Z�q
	int& operator[](int i) { return vec[i]; }

	//const�Y�����Z�q
	const int& operator[](int i) const { return vec[i]; }
};