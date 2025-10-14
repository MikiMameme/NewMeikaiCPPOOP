//日付クラス（ヘッダ）

class Date {
	int y;
	int m;
	int d;

public:
	Date(int yy, int mm, int dd);
	int year() { return y; }
	int month() { return m; }
	int day() { return d; }
};