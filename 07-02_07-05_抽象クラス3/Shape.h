//�}�`�N���X�Q�i���̂Q�j

#pragma once
#include<iostream>
#include<sstream>
#include<string>

//�}�`�N���X
class Shape {
public:
	//�������z�f�X�g���N�^
	virtual ~Shape() = 0;

	//����
	virtual Shape* clone() const = 0;

	//�`��
	virtual void draw() const = 0;

	//������\��
	virtual std::string to_string() const = 0;

	//������t���`��
	void print()const {
		std::cout << to_string() << '\n';
		draw();
	}

	//�f�o�b�O�p���\��
	virtual void debug() const = 0;
};

//�������z�f�X�g���N�^
inline Shape::~Shape(){}


//�f�o�b�O�p���\��
inline void Shape::debug() const
{
	std::cout << "�f�o�b�O���\n";
	std::cout << "�^:" << typeid(*this).name() << '\n';
	std::cout << "�A�h���X:" << this << '\n';
}

//�_�N���X
class Point : public Shape {
public:
	//�`��
	void draw() const {
		std::cout << "*\n";
	}

	//����
	Point* clone() const {
		return new Point;
	}

	//������\��
	std::string to_string() const {
		return "Point";
	}

	//�f�o�b�O�v���\��
	void debug() const {
		Shape::debug();
	}

};

//�����N���X�i���ۃN���X�j
class Line :public Shape {
protected:
	int length;

public:
	Line(int len) :length(len) {}
	int get_length() const { return length; }
	void set_length(int len) { length = len; }

	void debug()const {
		Shape::debug();
		std::cout << "length:" << length << '\n';
	}
};

//���������N���X
class HorzLine :public Line {
public:
	//�R���X�g���N�^
	HorzLine(int len):Line(len){ }

	//����
	virtual HorzLine* clone() const {
		return new HorzLine(length);
	}

	//�`��
	void draw() const {
		for(int i = 1; i <= length; i++)
			std::cout << '-';
	}

	//������\��
	std::string to_string() const {
		std::ostringstream os;
		os << "HorzLine(length:" << length << ")";
		return os.str();
	}
};

//���������N���X
class VertLine :public Line {
public:
	//�R���X�g���N�^
	VertLine(int len):Line(len){ }
	
	//����
	virtual VertLine* clone() const {
		return new VertLine(length);
	}

	//�`��
	void draw() const {
		for (int i = 1; i <= length; i++)
			std::cout << "|\n";
	}

	//������\��
	std::string to_string() const {
		std::ostringstream os;
		os << "VertLine(length:" << length << ")";
		return os.str();
	}
};

//�����`�N���X
class Rectangle : public Shape {
	int width;
	int height;

public:
	//�R���X�g���N�^
	Rectangle(int w, int h):width(w),height(h){ }

	//����
	Rectangle* clone() const {
		return new Rectangle(width, height);
	}

	//�`��
	void draw() const {
		for (int i = 1; i <= height; i++) {
			for (int j = 1; j <= width; j++)
				std::cout << '*';  //�Ԉ���Ă����̂ŏC������
			std::cout << '\n';
		}
	}

	//������\��
	std::string to_string() const {
		std::ostringstream os;
		os << "Rectangle(width:" << width << ", height:" << height << ")";
		return os.str();
	}

	//�f�o�b�O�p�c�[��
	void debug() const {
		Shape::debug();
		std::cout << "width:" << width << '\n';
		std::cout << "height:" << height << '\n';
	}
};

//�}�`�N���X�Q�p�̑}���q
inline std::ostream& operator<<(std::ostream& os, const Shape& s)
{
	return os << s.to_string();
}