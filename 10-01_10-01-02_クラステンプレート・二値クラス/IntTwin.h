//int型二値クラスIntTwin

#pragma once
#include<utility>
#include<algorithm>

//int型二値クラス
class IntTwin {
	int v1;
	int v2;

public:
	IntTwin(int f=0,int s=0):v1(f),v2(s){}

	int first() const { return v1; }
	int& first() { return v1; }

	int second() const { return v2; }
	int& second() { return v2; }

	void set(int f, int s) { v1 = f; v2 = s; }

	int min()const { return v1 < v2 ? v1 : v2; }

	bool ascending() const { return v1 < v2; }

	void sort() { if (!(v1 < v2))std::swap(v1, v2); }
};