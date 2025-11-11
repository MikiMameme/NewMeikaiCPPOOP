//ベクトルと配列の全要素の表示（反復子）

#include<iostream>
#include<vector>

using namespace std;

//first,lastの全要素を{}で囲んで順に表示
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{";
	for (InputIterator i = first; i != last; i++)
		cout << *i << ' ';
	cout << "}";
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	vector<int>x(a, a + 5);

	cout << "a="; print(a, a + 5); cout << '\n';

	cout << "x="; print(x.begin(), x.end()); cout << '\n';

	cout << "x="; print(x.rbegin(), x.rend()); cout << '\n';
}