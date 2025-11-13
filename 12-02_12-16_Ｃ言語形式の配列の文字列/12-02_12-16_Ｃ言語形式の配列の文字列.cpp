//文字列の配列のベクトル

#include<string>
#include<vector>
#include<iostream>

using namespace std;

//2次元配列による文字列の配列を変換
vector<string> str2dary_to_vec(char* p, int h, int w)
{
	vector<string>temp;
	for (int i = 0; i < h; i++)
		temp.push_back(&p[i * w]);
	return temp;
}

//ポインタによる文字列の配列を変換
vector<string>strptary_to_vec(char** p, int n)
{
	vector<string>temp;
	for (int i = 0; i < n; i++)
		temp.push_back(p[i]);
	return temp;
}

int main()
{
	const char a[][5] = { "LISP","C","Ada" };
	const char* p[] = { "WINDOWS","LINUX","MAC" };

	vector<string>sa = str2dary_to_vec(const_cast<char*>(&a[0][0]), 3, 5);
	for (vector<string>::size_type i = 0; i < sa.size(); i++)
		cout << "sa[" << i << "]=" << sa[i] << '\n';

	vector<string>sp = strptary_to_vec(const_cast<char**>(p), 3);
	for (vector<string>::size_type i = 0; i < sp.size(); i++)
		cout << "sp[" << i << "[=" << sp[i] << '\n';
}