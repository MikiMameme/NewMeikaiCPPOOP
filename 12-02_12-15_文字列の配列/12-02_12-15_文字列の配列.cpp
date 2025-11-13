//文字列のベクトル

#include<string>
#include<vector>
#include<iostream>

using namespace std;

//文字列のベクトル1文字ずつ走査して表示
template<class Allocator>
void put_string_vector(const vector<string, Allocator>& v)
{
	cout << "{";
	for (typename vector<string, Allocator>::size_type i = 0; i < v.size(); i++) {
		cout << '"';
		for (typename vector<string, Allocator>::size_type j = 0;
			j < v[i].length(); j++)
			cout << v[i][j];
		cout << "\" ";
	}
	cout << "}";
}

int main()
{
	vector<string>s1(3);
	vector<string>s2;
	s2.push_back("ABC");
	s2.push_back("123");
	s2.push_back("XYZ");

	cout << "s1=";
	put_string_vector(s1);
	cout << '\n';

	cout << "s2=";
	put_string_vector(s2);
	cout << '\n';
}