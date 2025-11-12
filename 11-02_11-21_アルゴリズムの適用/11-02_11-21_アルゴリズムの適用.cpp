//ベクトルに対するアルゴリズムの適用

#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

//値に続けてスペースを１個出力
template <class Type>
struct put1 : public unary_function<const Type&, void> {
	void operator()(const Type& n) {
		cout << n << ' ';
	}
};

//値に続けてスペースを１個出力（char用に特殊化）
template <>
struct put1<char> : public unary_function<const char&, void> {
	void operator()(const char& n) {
		cout << "'" << n << "' ";	
	}
};

//値に続けてスペースを１個出力（std::string用に特殊化）
template <>
struct put1<std::string> : public unary_function<const std::string&, void> {
	void operator()(const std::string& n) {
		cout << "\"" << n << "\" ";		
	}
};

//first, lastの全要素をスペース１個で区切って{}で囲んで順に表示 
template<class InputIterator>
void print(InputIterator first, InputIterator last)
{
	cout << "{ ";
	for_each(first, last, put1<typename std::iterator_traits<InputIterator>::value_type>());
	cout << "}";
}

//偶数であるかどうかを求める
template<class Type>
struct is_even :public unary_function<const Type&, bool> {
	bool operator()(const Type& n) {
		return n % 2 == 0;
	}
};

//10を加えた値を求める
template<class Type>
struct plus10 : public unary_function<const Type&,const Type&>{
	Type operator()(const Type& n) {
	return n + 10;
	}
};

//差を求める
template<class Type>
struct diff :public binary_function<const Type&, const Type&, Type>
{
	Type operator()(const Type& a1, const Type& a2) {
		return(a1 < a2) ? a2 - a1 : a1 - a2;
	}
};


int main()
{
	vector<int>a;
	for (vector<int>::size_type i = 0; i < 10; i++)
		a.push_back(i);

	vector<int>b(a);
	random_shuffle(b.begin(), b.end());

	vector<bool>c(10);
	transform(a.begin(), a.end(), c.begin(), is_even<int>());
	
	vector<int>d(10);
	transform(a.begin(), a.end(), d.begin(), plus10<int>());

	vector<int>e(10);
	transform(a.begin(), a.end(), b.begin(), e.begin(), diff<int>());

	cout << "a="; print(a.begin(), a.end()); cout << '\n';
	cout << "b="; print(b.begin(), b.end()); cout << '\n';
	cout << "c="; print(c.begin(), c.end()); cout << '\n';
	cout << "d="; print(d.begin(), d.end()); cout << '\n';
	cout << "e="; print(e.begin(), e.end()); cout << '\n';
}