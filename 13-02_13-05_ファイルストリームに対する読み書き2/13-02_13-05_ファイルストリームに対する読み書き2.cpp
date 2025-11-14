//入力ファイルストリームから文字列を行単位に読み込んで表示

#include<string>
#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ifstream fis("HELLO");

	if (!fis)
		cerr << "\aファイル\"HELLO\"をオープンできません\n";
	else {
		while (true) {
			string text;
			getline(fis, text);
			if (!fis)break;
			cout << text << '\n';
		}
	}
}