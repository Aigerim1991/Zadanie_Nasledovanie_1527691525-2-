#pragma once
#include "Pet.h"

/* производный класс «Хомяк» */
class Hamster : public Pet
{
private:
	const string animalType = "Cricetidae";
	const string sound = "Hi there!";
public:
	Hamster();
	Hamster(string petName);
	virtual void toString();
	virtual ~Hamster();
};
