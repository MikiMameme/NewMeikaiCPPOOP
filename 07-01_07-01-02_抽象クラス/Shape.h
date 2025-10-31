//�}�`�N���X�Q�i���̂P�j
#pragma once
#include<iostream>

//�}�`�N���X
class Shape {
public:
	virtual void draw() const = 0;
};

//�_�N���X
class Point :public Shape {
public:
	void draw() const {
	std::cout << "\n";
	}
};

//�����`�N���X
class Rectangle :public Shape {
	int width;
	int height;

public:
	Rectangle(int w,int h):width(w),height(h){ }
	
	//�`��
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';
			std::cout<<'\n';
		}
	}
};