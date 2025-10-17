#pragma once

//カウンタクラスCounter（その１）

#define __Class_Counter

#include<limits>

//カウンタクラス
class Counter {
	unsigned cnt;

public:

	Counter():cnt(0){}

	void increment() { if (cnt < std::numeric_limits<unsigned>::max())cnt++; }

	void decrement() { if (cnt > 0)cnt--; }
	
	unsigned value() { return cnt; }

};