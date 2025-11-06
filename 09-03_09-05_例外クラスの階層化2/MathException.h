//数値演算例外クラス群（その２）
#pragma once

//数値演算による例外　
class MathException{};

//０による除算
class DividedByZero {};

//オーバーフロー
class Overflow {
	int v;
public:
	Overflow(int val) :v(val) {}
	int value()const { return v; }
};

//アンダーフロー 
class Underflow {
	int v;
public:
	Underflow(int val) :v(val) {}
	int value()const { return v; }
};