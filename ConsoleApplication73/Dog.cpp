#include "stdafx.h"
#include "Dog.h"


Dog::Dog()
{
}

Dog::Dog(string petName) :Pet(petName)
{
}

void Dog::toString()
{
	Line();
	cout << "Вид: " << animalType << "\n" << "Кличка: " << getName() << "\n" << "Издаваемый звук: " << sound << endl;
	Line();
}


Dog::~Dog()
{
}
