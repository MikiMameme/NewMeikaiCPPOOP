//識別番号クラスIdNo（ソース部）

#include"IdNo.h"

int IdNo::counter = 0;

//コンストラクタ
IdNo::IdNo()
{
	id_no = ++counter;
}

//識別番号を調べる
int IdNo::id() const
{
	return id_no;
}

//識別番号の最大値を調べる
int IdNo::get_max_id()
{
	return counter;
}