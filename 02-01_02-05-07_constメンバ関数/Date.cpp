//���t�N���X�i�\�[�X�����̂Q

#define _CRT_SECURE_NO_WARNINGS

#include<ctime>
#include<sstream>
#include<iostream>
#include "Date.h"

using namespace std;

//�f�t�H���g�R���X�g���N�^
Date::Date()
{
	time_t current = time(NULL);
	struct tm* local = localtime(&current);

	y = local->tm_year + 1900;
	m = local->tm_mon + 1;
	d = local->tm_mday;
}

//�R���X�g���N�^
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}

//�O���̓��t��ԋp�i���邤�N��Ή��j
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

//������\����ԋp
string Date::to_string() const
{
	ostringstream s;
	s << y << "�N" << m << "��" << d << "��";
	return s.str();
}

//�j����ԋp�i���j����y�j���O�`�U�ɑΉ��j
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

//�o�̓X�g���[���ɑ}��
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}

//���̓X�g���[��������t�𒊏o���Ċi�[
istream& operator>>(istream& s, Date& x)
{
	int yy, mm, dd;
	char ch;

	s >> yy >> ch >> mm >> ch >> dd;
	x = Date(yy, mm, dd);
	return s;
}