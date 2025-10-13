//会計クラス（ヘッダファイル）

#include<string>

class Accounting {
	std::string full_name;
	long crnt_asset;

public:
	Accounting(std::string name, long amnt);

	std::string name() { return full_name; }
	long asset() { return crnt_asset; }

	void earn(long amnt);
	void spend(long amnt);
};