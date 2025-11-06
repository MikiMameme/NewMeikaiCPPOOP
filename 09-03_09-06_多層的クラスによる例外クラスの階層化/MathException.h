//数値演算例外クラス群（その３）

#pragma once
#include<string>

//数値演算による例外　
class MathException {
public:
	virtual void display()const {std::cout << "数値演算例外\n";}
	};

//０による除算
class DividedByZero:public MathException{
public:
	void display()const {std::cout<<"０による除算\n";}
};

//オーバーフロー
class Overflow:public MathException {
	int v;
public:
	Overflow(int val) :v(val) {}
	int value()const { return v; }
	void display() const { std::cout << "オーバーフロー(値は" << v << "）\n"; }
};

//アンダーフロー 
class Underflow:public MathException {
	int v;
public:
	Underflow(int val) :v(val) {}
	int value()const { return v; }
	void display() const { std::cout << "アンダーフロー(値は" << v << "）\n"; }
};