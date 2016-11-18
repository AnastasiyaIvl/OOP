#include "stdafx.h"
#include "Technics.h"

Technics::Technics() : Product()
{
	_name = "No name";
}

Technics::Technics(std::string name) : Technics()
{
	_name = name;
}

Technics::Technics(std::string serialNumber, std::string  name) : Product(serialNumber)
{
	_name = name;
}

Technics::~Technics() {}

std::string Technics::getName() const
{
	return _name;
}

void Technics::setName(std::string name)
{
	_name = name;
}



