#include "stdafx.h"
#include "Hamster.h"

Hamster::Hamster()
{
}

Hamster::Hamster(string petName) :Pet(petName)
{
}

void Hamster::toString()
{
	Line();
	cout << "Вид: " << animalType << "\n" << "Кличка: " << getName() << "\n" << "Издаваемый звук: " << sound << endl;
	Line();
}


Hamster::~Hamster()
{
}
