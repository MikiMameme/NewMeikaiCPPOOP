//数値演算例外クラス群（その４）


#pragma once

#include<string>
#include<cstring>
#include<sstream>
#include<exception>
#include<stdexcept>

//数値演算による例外
class MathException :public std::logic_error {
public:
	//コンストラクタ
	MathException():logic_error("数値演算例外"){}
	virtual const char* what() const noexcept { return"数値演算例外"; } //C++11以降はnoexceptが必須！
};

//０による除算
class DividedByZero :public MathException {
public:
	const char* what() const noexcept { return "０による除算"; } //C++11以降はnoexceptが必須！
};

//オーバーフロー
class Overflow :public MathException {
	int v;
public:
	Overflow(int val):v(val){}
	int value() const { return v; }

	const char* what() const noexcept {
		static std::string msg;
		std::ostringstream s;
		s << "オーバーフロー（値は" << v << "）";
		msg = s.str();
		return msg.c_str();
	}
};

//アンダーフロー
class Underflow :public MathException {
	int v;

public:
	Underflow(int val) :v(val) {}

	int value() const { return v; }

	const char* what() const noexcept {
		static char buff[128];
		std::ostringstream s;
		s << "アンダーフロー(値は" << v << ")";
		strcpy_s(buff, sizeof(buff), s.str().c_str());
		return buff;
	}
};