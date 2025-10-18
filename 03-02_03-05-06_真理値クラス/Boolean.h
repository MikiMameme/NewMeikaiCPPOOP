#pragma once

//真理値クラスBoolean（クラスファイル）

#include<iostream>

//真理値クラス
class Boolean {

public:
	enum boolean{False, True};

private:
	boolean v;

public:
	Boolean() :v(False) {}

//コンストラクタ
	Boolean(int val) :v(val == 0 ? False : True){}

	operator int() const { return v; }
	
	operator const char* () const { return v == False ? "False" : "True"; }

};

inline std::ostream& operator<<(std::ostream& s, const Boolean& x)
{
	return s << static_cast<const char*>(x);
}