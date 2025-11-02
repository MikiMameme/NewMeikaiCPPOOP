//長方形クラスRectangle

#pragma once
#include<string>
#include<sstream>
#include<iostream>
#include"Shape.h"
#include"TwoDimensional.h"

//長方形クラス
class Rectangle : public Shape,public TwoDimensional {
	int width;
	int height;

public:
	//コンストラクタ
	Rectangle(int w, int h) :width(w), height(h) {}

	//複製
	Rectangle* clone() const {
		return new Rectangle(width, height);
	}

	//描画
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';  //間違っていたので修正した
			std::cout << '\n';
		}
	}

	//文字列表現
	std::string to_string() const {
		std::ostringstream os;
		os << "Rectangle(width:" << width << ", height:" << height << ")";
		return os.str();
	}

	//デバッグ用ツール
	void debug() const {
		Shape::debug();
		std::cout << "width:" << width << '\n';
		std::cout << "height:" << height << '\n';
	}

	//面積を求める
	double get_area() const {
		return width * height;
	}
};