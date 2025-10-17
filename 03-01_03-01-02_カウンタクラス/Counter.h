#pragma once

//�J�E���^�N���XCounter�i���̂P�j

#define __Class_Counter

#include<limits>

//�J�E���^�N���X
class Counter {
	unsigned cnt;

public:

	Counter():cnt(0){}

	void increment() { if (cnt < std::numeric_limits<unsigned>::max())cnt++; }

	void decrement() { if (cnt > 0)cnt--; }
	
	unsigned value() { return cnt; }

};