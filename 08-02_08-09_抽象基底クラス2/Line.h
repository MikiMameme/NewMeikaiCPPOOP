//直線クラス群

#pragma once
#include<string>
#include<sstream>
#include<iostream>
#include"Shape.h"

//直線クラス
class Line :public Shape {
protected:
	int length;

public:
	
	//コンストラクタ
	Line(int len) :length(len) {}

	//長さのゲッタ
	int get_length() const { return length; }
	
	//長さのセッタ
	void set_length(int len) { length = len; }

	//デバッグ情報表示
	void debug()const {
		Shape::debug();
		std::cout << "length:" << length << '\n';
	}
};

//水平直線クラス
class HorzLine :public Line {
public:
	//コンストラクタ
	HorzLine(int len) :Line(len) {}

	//複製
	virtual HorzLine* clone() const {
		return new HorzLine(length);
	}

	//描画
	void draw() const {
		for (int i = 1; i <= length; i++)
			std::cout << '-';
	}

	//文字列表現
	std::string to_string() const {
		std::ostringstream os;
		os << "HorzLine(length:" << length << ")";
		return os.str();
	}
};

//垂直直線クラス
class VertLine :public Line {
public:
	//コンストラクタ
	VertLine(int len) :Line(len) {}

	//複製
	virtual VertLine* clone() const {
		return new VertLine(length);
	}

	//描画
	void draw() const {
		for (int i = 1; i <= length; i++)
			std::cout << "|\n";
	}

	//文字列表現
	std::string to_string() const {
		std::ostringstream os;
		os << "VertLine(length:" << length << ")";
		return os.str();
	}
};