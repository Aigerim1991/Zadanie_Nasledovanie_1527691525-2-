#include "stdafx.h"
#include "Parrot.h"

Parrot::Parrot()
{
}

Parrot::Parrot(string petName)
{
}

void Parrot::toString()
{
	Line();
	cout << "Вид: " << animalType << "\n" << "Кличка: " << getName() << "\n" << "Издаваемый звук: " << sound << endl;
	Line();
}


Parrot::~Parrot()
{
}
