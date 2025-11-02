//図形クラス間のクロスキャスト

#include<iostream>
#include"Shape.h"
#include"Line.h"
#include"TwoDimensional.h"
#include"Rectangle.h"

using namespace std;

int main()
{
	Shape* s = new HorzLine(5);

	if (TwoDimensional* w = dynamic_cast<TwoDimensional*>(s))
		cout << "面積は" << w->get_area() << "です\n";

	Shape* r = new Rectangle(3, 5);

	if (TwoDimensional* w = dynamic_cast<TwoDimensional*>(r))
		cout << "面積は" << w->get_area() << "です\n";

	TwoDimensional* t = new Rectangle(6, 4);

	if (Shape* s = dynamic_cast<Shape*>(t))
		s->draw();

	delete s;
	delete r;
	delete t;
}