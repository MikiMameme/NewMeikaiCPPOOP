//�����z��N���X�i�\�[�X�����̂R�j

#include<iostream>
#include"IntArray.h"

//�R�s�[�R���X�g���N�^
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

//������Z�q
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