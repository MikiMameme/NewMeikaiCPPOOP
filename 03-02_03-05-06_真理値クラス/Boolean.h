#pragma once

//�^���l�N���XBoolean�i�N���X�t�@�C���j

#include<iostream>

//�^���l�N���X
class Boolean {

public:
	enum boolean{False, True};

private:
	boolean v;

public:
	Boolean() :v(False) {}

//�R���X�g���N�^
	Boolean(int val) :v(val == 0 ? False : True){}

	operator int() const { return v; }
	
	operator const char* () const { return v == False ? "False" : "True"; }

};

inline std::ostream& operator<<(std::ostream& s, const Boolean& x)
{
	return s << static_cast<const char*>(x);
}