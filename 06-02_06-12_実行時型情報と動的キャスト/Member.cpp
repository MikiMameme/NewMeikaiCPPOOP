//��ʉ���N���X�i�\�[�X�����̂Q�j

#include<iostream>
#include"Member.h"

using namespace std;

//�R���X�g���N�^
Member::Member(const string& name, int no, double w)
	: full_name(name), number(no)
{
	set_weight(w);
}

//������\��
void Member::print() const
{
	cout << "No." << number << ":" << full_name << "(" << weight << "kg)\n";
}