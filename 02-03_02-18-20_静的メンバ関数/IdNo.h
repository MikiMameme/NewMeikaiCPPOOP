//���ʔԍ��N���XIdNo�i�w�b�_�[���j

#pragma onece
#define ___Class_IdNo

//���ʔԍ��N���X
class IdNo {
	static int counter;
	int id_no;

public:
	IdNo();

	int id() const;
	static int get_max_id();
};