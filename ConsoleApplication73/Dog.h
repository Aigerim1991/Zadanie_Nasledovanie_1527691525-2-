#pragma once
#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

/* производный класс «Собака» */
class Dog : public Pet
{
private:
	const string animalType = "Wolf";
	const string sound = "Woof-woof ";
public:
	Dog();
	Dog(string petName);
	virtual void toString();
	virtual ~Dog();
};