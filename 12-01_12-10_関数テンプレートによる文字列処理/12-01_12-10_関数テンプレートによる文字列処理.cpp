//指定長になるように文字列の後ろに同一文字を加える（関数テンプレート）

#include<iostream>
#include<string>

using namespace std;

//width文字になるように文字列sの後ろに文字chを埋め尽くす
template<class type>
void pad_char(basic_string<type>& s, type ch,
	typename basic_string<type>::size_type width)
{
	if (width > s.length())
		s.append(width - s.length(), ch);
}
int main()
{
	string s1 = "ABC";
	wstring s2 = L"神酒まめ";
	wcout.imbue(std::locale("Japanese"));

	pad_char(s1, '+', 10);
	pad_char(s2, L'＋', 10);

	cout << "s1=" << s1 << '\n';
	wcout << "s2=" << s2 << '\n';
}