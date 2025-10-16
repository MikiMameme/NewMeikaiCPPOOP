//日付クラス（ヘッダその２）

#ifndef ___Class_Date
#define ___Class_Date

#include<string>
#include<iostream>

class Date {
	int y;
	int m;
	int d;

public:
	Date();
	Date(int yy, int mm = 1, int dd = 1);

	int year() const { return y; }
	int month() const { return m; }
	int day() const { return d; }

	Date preceding_day() const;

	std::string to_string() const;

	int day_of_week() const;
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);

#endif