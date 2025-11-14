//フラグの設定と復元

#include<iostream>

using namespace std;

void put_ary(double ary[], int n)
{
	ios_base::fmtflags flags = ios_base::right | ios_base::dec | ios_base::fixed;

	ios_base::fmtflags old_flags = cout.flags();
	streamsize old_size = cout.width();
	streamsize old_prec = cout.precision(2);

	for (int i = 0; i < n; i++) {
		cout.width(10);
		cout.flags(flags);
		cout << ary[i] << '\n';
	}

	cout.flags(old_flags);
	cout.width(old_size);
	cout.precision(old_prec);
}

int main()
{
	double a[] = { 1234.235,5568.6205,78999.312 };

	cout << 0.00001234567890 << "\n\n";

	put_ary(a, sizeof(a) / sizeof(a[0]));
	cout << '\n';

	cout << 0.00001234567890 << '\n';
}