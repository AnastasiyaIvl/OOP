#include "stdafx.h"
#include "Computer.h"
#include <iostream>

Computer::Computer() : Technics()
{
	_typeCpu = Computer::Cpu::Type::i3;
}

Computer::Computer(int typeCpu)
{
	isCorrect(typeCpu);
}

Computer::Computer(std::string serialNumber, std::string name, int typeCpu) : Technics(serialNumber, name)
{
	isCorrect(typeCpu);
}

Computer::~Computer() {}

int Computer::getTypeCpu() const
{
	return _typeCpu;
}

void Computer::setTypeCpu(int typeCpu)
{
	isCorrect(typeCpu);
}

bool Computer::isCorrect(int typeCpu)
{
	_typeCpu = Computer::Cpu::Type::i3;

	switch (typeCpu)
	{
	case Computer::Cpu::Type::i3:
		_typeCpu = Computer::Cpu::Type::i3;
		break;
	case Computer::Cpu::Type::i5:
		_typeCpu = Computer::Cpu::Type::i5;
		break;
	case Computer::Cpu::Type::i7:
		_typeCpu = Computer::Cpu::Type::i7;
		break;
	default:
		std::cout << "Incorrect type CPU" << std::endl;
		return  false;
	}

	return true;
}

void Computer::show(int typeCpu)
{
	switch (typeCpu)
	{
	case Cpu::Type::i3:
		std::cout << "CPU:\t\ti3" << std::endl;
		break;
	case Cpu::Type::i5:
		std::cout << "CPU:\t\ti5" << std::endl;
		break;
	case Cpu::Type::i7:
		std::cout << "CPU:\t\ti7" << std::endl;
		break;
	}
}

void Computer::Cpu::print(int typeCpu)
{
	Computer::show(typeCpu);
}
