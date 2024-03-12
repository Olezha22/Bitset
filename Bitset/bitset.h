#pragma once
#include <iostream>

const int BITS_PER_INT = 32;
const int ARRAY_SIZE = 8;

class Bitset
{
private:
	unsigned int bitsetArr[ARRAY_SIZE];
public:
	Bitset();
	void set(int index);
	void print() const;
	bool test(int index) const;
	void reset(int index);
	int size() const;
	void flip();
	void resetAll();
};