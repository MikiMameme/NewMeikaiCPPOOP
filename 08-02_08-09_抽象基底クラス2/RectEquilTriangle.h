//直角二等辺三角形クラス群

#pragma once
#include<string>
#include<sstream>
#include<iostream>
#include"Shape.h"
#include"TwoDimensional.h"

//直角二等辺三角形クラス（抽象クラス）
class RectEquilTriangle :public Shape, public TwoDimensional {
protected:
	int length;

public:
	//コンストラクタ
	RectEquilTriangle(int len):length(len){ }

	//面積を求める
	double get_area() const {
		return length * length / 2.0;
	}
};

//左下直角二等辺三角形クラス
class RectEquilTriangleLB :public RectEquilTriangle {
public:
	//コンストラクタ
	RectEquilTriangleLB(int len):RectEquilTriangle(len){ }

	//複製
	RectEquilTriangleLB* clone() const {
		return new RectEquilTriangleLB(length);
	}

	//描画
	void draw() const {
		for (int i = 1; i <= length; i++) {
			for (int j = 1; j <= i; j++)
				std:: cout << '*';
			std::cout << '\n';
		}
	}

	//文字列表現
	std::string to_string() const {
		std::ostringstream os;
		os << "RectEquilTriangleLB(length:" << length << ")";
		return os.str();
	}

	//デバッグ用情報表示
	void debug() const {
		Shape::debug();
		std::cout << "クラス:RectEquilTriangleLB\n";
		std::cout << "アドレス" << this << '\n';
		std::cout << "length:" << length << '\n';
	}
};

//右上直角二等辺三角形クラス
class RectEquilTriangleRU : public RectEquilTriangle {
public:
	//コンストラクタ
	RectEquilTriangleRU(int len) : RectEquilTriangle(len) {}

	//複製
	RectEquilTriangleRU* clone() const {
		return new RectEquilTriangleRU(length);
	}

	//描画
	void draw() const {
		for (int i = 1; i <= length; i++) {
			for (int j = 1; j <= i; j++)
				std::cout << '*';
			std::cout << '\n';
		}
	}

	//文字列表現
	std::string to_string() const {
		std::ostringstream os;
		os << "RectEquilTriangleRU(length:" << length << ")";
		return os.str();
	}

	//デバッグ用情報表示
	void debug() const {
		Shape::debug();
		std::cout << "クラス:RectEquilTriangleRU\n";
		std::cout << "アドレス" << this << '\n';
		std::cout << "length:" << length << '\n';
	}
};