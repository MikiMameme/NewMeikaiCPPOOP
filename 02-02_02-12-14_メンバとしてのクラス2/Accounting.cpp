//��v�N���X�i���̂U�A�\�[�X���j

#include<iostream>
#include<string>
#include"Accounting.h"

using namespace std;

//�R���X�g���N�^
Accounting::Accounting(const string& name, long amnt, const Date& op) :
	full_name(name), crnt_asset(amnt), birth(op)
{
}

//����������
void Accounting::earn(long amnt)
{
	crnt_asset += amnt;
}

//�x�o������
void Accounting::spend(long amnt)
{
	crnt_asset -= amnt;
}