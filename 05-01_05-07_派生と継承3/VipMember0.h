//�D�҉���N���X�i�w�b�_���j

#pragma once
#include<string>

//�D�҃N���X
class VipMember0 {
	std::string full_name;
	int number;
	double weight;
	std::string privilege;

public:
	//�R���X�g���N�^
	VipMember0(const std::string& name, int no, double w, const std::string& prv);

	//�����擾
	std::string name() const { return full_name; }

	//����ԍ��擾
	int no() const { return number; }

	//�̏d�擾
	double get_weight() { return weight; }

	//�̏d�ݒ�
	void set_weight(double w) { weight = (w > 0) ? w : 0; }

	//������\�� 
	void print() const;

	//�D�҉�����T�擾
	std::string get_privilege() const { return privilege; }

	//���T�ݒ�
	void set_privilege(const std::string& prv) {
		privilege = (prv != " ") ? prv : "���o�^";
	}
};