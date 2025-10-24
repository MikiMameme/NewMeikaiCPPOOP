//��ʉ���N���X�i�w�b�_�����̂P�j

#pragma once
#include<string>

//��ʉ���N���X
class Member {
	std::string full_name;
	int number;
	double weight;

public:
	//�R���X�g���N�^
	Member(const std::string& name, int no, double w);

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
};
