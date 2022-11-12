#pragma once
#include "Animal.h"
class dog : public Animal

{
private:
	int GurimCount;
public:
	void GurimCounter(int GurimCount);
	void printCounter(int GurimCount);
};

