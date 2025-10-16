//識別番号クラスIdNo（ヘッダー部）

#pragma onece
#define ___Class_IdNo

//識別番号クラス
class IdNo {
	static int counter;
	int id_no;

public:
	IdNo();

	int id() const;
	static int get_max_id();
};