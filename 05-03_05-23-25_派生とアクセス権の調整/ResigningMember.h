//�މ�ς݉���N���X

#pragma once
#include<iostream>
#include"Member.h"

//�މ�ς݉���N���X
class ResigningMember :private Member {

public:
	//�R���X�g���N�^
	ResigningMember(const std::string& name, int number, double w):
		Member(name,number, w){  }

	//�̏d�ݒ�
	double get_weight() {
		std::cout << "�މ������̑̏d�̎擾�͂ł��܂���\n";
		return 0;
	}

	//�����o�֐��̃A�N�Z�X���𒲐�
	using Member::no;
};