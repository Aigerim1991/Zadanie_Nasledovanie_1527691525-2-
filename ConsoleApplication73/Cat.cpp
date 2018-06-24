#include "stdafx.h"
#include "Cat.h"

Cat::Cat()
{
}

Cat::Cat(string petName) :Pet(petName)
{
}

void Cat::toString()
{
	Line();
	cout << "Вид: " << animalType << "\n" << "Кличка: " << getName() << "\n" << "Издаваемый звук: " << sound << endl;
	Line();
}


Cat::~Cat()
{
}
