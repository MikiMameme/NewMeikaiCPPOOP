//�D�҉���N���X�i�\�[�X���j

#include<iostream>
#include"VipMember0.h"

using namespace std;

//�R���X�g���N�^
VipMember0::VipMember0(const string& name, int no, double w, const string& prv)
	: full_name(name), number(no)
{
	set_weight(w);
	set_privilege(prv);
}

//������\��
void VipMember0::print() const
{
	cout << "No." << number << ":" << full_name << "(" << weight << "kg)"
		<< "���T=" << privilege << '\n';
}