//��������N���X�i�\�[�X���j

#include<iostream>
#include<string>
#include"SeniorMember.h"

using namespace std;

//�R���X�g���N�^
SeniorMember::SeniorMember(const string& name, int no, double w, int level)
	:Member(name, no, w)
{
	set_care_level(level);
}

//������\��
void SeniorMember::print() const
{
	cout << "No." <<no()<< ":" << name() << "(" << get_weight() << "kg)"
		<< "�v���x=" << care_level << '\n';
}