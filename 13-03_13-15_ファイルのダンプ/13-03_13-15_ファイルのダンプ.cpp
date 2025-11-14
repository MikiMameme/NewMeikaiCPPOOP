//ダンプ（ファイル中の全バイトを文字とコードで表示）

#include<string>
#include<cctype>
#include<fstream>
#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	string fname;

	cout << "ファイル名:";
	cin >> fname;

	ifstream fs(fname.c_str(), ios_base::binary);
	if (!fs)
		cerr << "\aファイルをオープンできません\n";
	else {
		unsigned long count = 0;
		while (true) {
			int n;
			unsigned char buf[16];
			fs.read(reinterpret_cast<char*>(buf), 16);
			if ((n = fs.gcount()) == 0)break;

			cout << hex << setw(8) << setfill('0') << count << ' ';

			for (int i = 0; i < n; i++)
				cout << hex << setw(2) << setfill('0')
				<< static_cast<unsigned>(buf[i]) << ' ';

			if (n < 16)
				for (int i = n; i < 16; i++)cout << " ";

			for (int i = 0; i < n; i++)
				cout << (isprint(buf[i]) ? static_cast<char>(buf[i]): '.');

			cout << '\n';
			if (n < 16)break;
			count += 16;
		}
	}
}