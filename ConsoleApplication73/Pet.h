#pragma once
#include <iostream>
#include <string>

using namespace std;

/* базовый класс «Домашнее животное» */
class Pet
{
private:
	string petName; // кличка животного

public:
	Pet();
	Pet(string petName);
	string getName();
	virtual void toString();
	virtual void Line();
	virtual ~Pet();
};
