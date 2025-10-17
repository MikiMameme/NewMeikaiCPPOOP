#pragma once

//�J�E���^�N���XCounter�i���̂Q�j

#include<limits>

//�J�E���^�N���X
class Counter {
	unsigned cnt;

public:
	Counter() : cnt(0) { }

	operator unsigned() const { return cnt; }

	bool operator!() const { return cnt == 0; }

	//�O�u�������Z�q++
	Counter& operator++() {
		if (cnt < std::numeric_limits<unsigned>::max())cnt++;
		return *this;
	}

	//��u�������Z�q++
	Counter operator++(int) {
		Counter x = *this;
		++(*this);
		return x;
	}

	//�O�u�������Z�q--
	Counter& operator--() {
		if (cnt > 0)cnt--;
		return *this;
	}

	//��u�������Z�q--
	Counter operator--(int) {
		Counter x = *this;
		--(*this);
		return x;
	}

};