//日付クラス（ソース部その２

#define _CRT_SECURE_NO_WARNINGS

#include<ctime>
#include<sstream>
#include<iostream>
#include "Date.h"

using namespace std;

//デフォルトコンストラクタ
Date::Date()
{
	time_t current = time(NULL);
	struct tm* local = localtime(&current);

	y = local->tm_year + 1900;
	m = local->tm_mon + 1;
	d = local->tm_mday;
}

//コンストラクタ
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}

//前日の日付を返却（うるう年非対応）
Date Date::preceding_day() const
{
	int dmax[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	Date temp = *this;

	if (temp.d > 1)
		temp.d--;
	else {
		if (--temp.m < 1) {
			temp.y--;
			temp.m = 12;
		}
		temp.d = dmax[temp.m - 1];
	}
	return temp;
}

//文字列表現を返却
string Date::to_string() const
{
	ostringstream s;
	s << y << "年" << m << "月" << d << "日";
	return s.str();
}

//曜日を返却（日曜から土曜が０～６に対応）
int Date::day_of_week() const
{
	int yy = y;
	int mm = m;
	if (mm == 1 || mm == 2) {
		yy--;
		mm += 12;
	}

	return(yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

//出力ストリームに挿入
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}

//入力ストリームから日付を抽出して格納
istream& operator>>(istream& s, Date& x)
{
	int yy, mm, dd;
	char ch;

	s >> yy >> ch >> mm >> ch >> dd;
	x = Date(yy, mm, dd);
	return s;
}