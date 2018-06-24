#pragma once
#include "Pet.h"

/* производный класс «Попугай» */
class Parrot : public Pet
{
private:
	const string animalType = "Psittaciformes";
	const string sound = "Piasters! Piasters!";
public:
	Parrot();
	Parrot(string petName);
	virtual void toString();
	virtual ~Parrot();
};
