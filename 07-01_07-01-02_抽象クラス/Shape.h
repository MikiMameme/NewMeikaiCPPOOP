//図形クラス群（その１）
#pragma once
#include<iostream>

//図形クラス
class Shape {
public:
	virtual void draw() const = 0;
};

//点クラス
class Point :public Shape {
public:
	void draw() const {
	std::cout << "\n";
	}
};

//長方形クラス
class Rectangle :public Shape {
	int width;
	int height;

public:
	Rectangle(int w,int h):width(w),height(h){ }
	
	//描画
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';
			std::cout<<'\n';
		}
	}
};