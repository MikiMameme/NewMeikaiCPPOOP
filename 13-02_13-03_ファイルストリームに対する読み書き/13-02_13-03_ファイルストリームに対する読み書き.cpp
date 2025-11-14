//出力ファイルストリームへの書き込み

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fos("HELLO");

	if (!fos)
		cerr << "\aファイル\"HELLO\"をオープンできません\n";
	else {
		fos << "Hello!\n";
		fos << "How are you?\n";
	}
}