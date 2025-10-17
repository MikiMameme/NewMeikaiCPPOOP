#pragma once

//カウンタクラスCounter（その２）

#include<limits>

//カウンタクラス
class Counter {
	unsigned cnt;

public:
	Counter() : cnt(0) { }

	operator unsigned() const { return cnt; }

	bool operator!() const { return cnt == 0; }

	//前置増分演算子++
	Counter& operator++() {
		if (cnt < std::numeric_limits<unsigned>::max())cnt++;
		return *this;
	}

	//後置増分演算子++
	Counter operator++(int) {
		Counter x = *this;
		++(*this);
		return x;
	}

	//前置減分演算子--
	Counter& operator--() {
		if (cnt > 0)cnt--;
		return *this;
	}

	//後置減分演算子--
	Counter operator--(int) {
		Counter x = *this;
		--(*this);
		return x;
	}

};