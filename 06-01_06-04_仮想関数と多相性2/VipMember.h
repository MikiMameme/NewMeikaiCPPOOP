//�D�҉���N���X�i�w�b�_���j

#pragma once
#include<iostream>
#include"Member.h"

//�D�҉���N���X
class VipMember :public Member {
	std::string privilege;

public:
	VipMember(const std::string& name, int no, double w, const std::string& prv);

	void print() const;

	std::string get_privilege() const { return privilege; }

	void set_privilege(const std::string& prv) {
		privilege = (prv != "") ? prv : "���o�^";
	}
};