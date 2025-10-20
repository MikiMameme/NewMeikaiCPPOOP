//•¡‘f”ƒNƒ‰ƒXComplex

#pragma once
#include<iostream>

//•¡‘f”ƒNƒ‰ƒX
class Complex {
	double re;
	double im;

public:
	Complex(double r = 0, double i=0 ): re(r),im(i){}

	double real() const { return re; }
	double imag() const { return im; }

	Complex operator+() const { return *this; }
	Complex operator-() const { return Complex(-re, im); }

	//•¡‡‘ã“ü‰‰Zq+=
	Complex& operator+=(const Complex& x) {
		re += x.re;
		im += x.im;
		return *this;
	}

	//•¡‡‘ã“ü‰‰Zq-=
	Complex& operator-=(const Complex& x) {
		re -= x.re;
		im -= x.im;
		return *this;
	}

	//“™‰¿‰‰Zq==
	friend bool operator==(const Complex& x, const Complex& y) {
		return x.re == y.re && x.im == y.im;
	}

	//“™‰¿‰‰Zq!=
	friend bool operator!=(const Complex& x, const Complex& y) {
		return !(x == y);
	}

	//2€+‰‰Zq1
	friend Complex operator+(const Complex& x, const Complex& y) {
		return Complex(x.re + y.re, x.im + y.im);
	}

	//2€+‰‰Zq2
	friend Complex operator+(double x, const Complex& y) {
		return Complex(x + y.re, y.im);
	}

	//2€+‰‰Zq3
	friend Complex operator+(const Complex& x, double y) {
		return Complex(x.re + y, x.im);
	}

};


//o—ÍƒXƒgƒŠ[ƒ€s‚Éx‚ğ‘}“ü
inline std::ostream& operator<<(std::ostream& s, const Complex& x) 
{
	return s << '(' << x.real() << ", " << x.imag() << ')';

}
