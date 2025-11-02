//点クラスPoint

#pragma once
#include<iostream>
#include<string>
#include"Shape.h"

class Point : public Shape {
public:
	//描画
	void draw() const {
		std::cout << "*\n";
	}

	//複製
	Point* clone() const {
		return new Point;
	}

	//文字列表現
	std::string to_string() const {
		return "Point";
	}

	//デバッグ要情報表示
	void debug() const {
		Shape::debug();
	}

};