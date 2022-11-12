#pragma once
#include "Animal.h"
class Cat : public Animal
{
private:
	int GurimCount;
	 

public:
	int Age;
	void printCounter(int GurimCount);
	void GurimCounter(int GurimCount);
	void age(int Age);
};

