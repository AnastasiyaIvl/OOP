#include "stdafx.h"
#include "Printer.h"
#include <iostream>

Printer::Printer() : Technics()
{
	_speedPrint = 0;
}

Printer::Printer(int speedPrint) : Printer()
{
	isCorrect(speedPrint);
}

Printer::Printer(std::string serialNumber, std::string name, int speedPrint) : Technics(serialNumber, name)
{
	isCorrect(speedPrint);
}

Printer::~Printer() {}

int Printer::getSpeedPrint() const
{
	return _speedPrint;
}

void Printer::setSpeedPrint(int speedPrint)
{
	isCorrect(speedPrint);
}

bool Printer::isCorrect(int speedPrint)
{
	_speedPrint = 0;

	if (speedPrint > 0)
		_speedPrint = speedPrint;
	else {
		std::cout << "Incorrect speed print" << std::endl;
		return false;
	}

	return true;
}