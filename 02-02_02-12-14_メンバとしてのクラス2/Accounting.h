//会計クラス（その６、ヘッダー部分）

//学習のため#pragma oneceを試験的に使います
#pragma onece

#define ___class_Accounting

#include<string>
#include"Date.h"

class Accounting {
	std::string full_name;
	long crnt_asset;
	Date birth;

public:
	Accounting(const std::string& name, long amnt, const Date& op);

	void earn(long amnt);
	void spend(long amnt);

	std::string name() const { return full_name; }
	long asset() const { return crnt_asset; }
	Date birthday() const { return birth; }

};