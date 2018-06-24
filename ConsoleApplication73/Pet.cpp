#include "stdafx.h"
#include "Pet.h"

Pet::Pet()
{
}

Pet::Pet(string petName)
{
	this->petName = petName;
}

string Pet::getName()
{
	return string(petName);
}

void Pet::toString()
{
	cout << "Error. Listing list is not available for the base class." << endl;
}

void Pet::Line()
{
	cout << "----------------------------------------------" << endl;
}

Pet::~Pet()
{
}
