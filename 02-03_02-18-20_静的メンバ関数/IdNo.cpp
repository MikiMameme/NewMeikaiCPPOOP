//���ʔԍ��N���XIdNo�i�\�[�X���j

#include"IdNo.h"

int IdNo::counter = 0;

//�R���X�g���N�^
IdNo::IdNo()
{
	id_no = ++counter;
}

//���ʔԍ��𒲂ׂ�
int IdNo::id() const
{
	return id_no;
}

//���ʔԍ��̍ő�l�𒲂ׂ�
int IdNo::get_max_id()
{
	return counter;
}