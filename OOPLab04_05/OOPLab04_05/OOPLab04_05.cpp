// OOPLab04_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Product.h"
#include "Technics.h"
#include "Printer.h"
#include "Scanner.h"
#include "Computer.h"
#include "Tablet.h"

int main()
{
	std::cout << "----- OOPLab04_05 ------\n" << std::endl;

	Printer printer("1234ABCD", "Samsung", 60);

	std::cout << "Serial number:\t" << printer.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << printer.getName() << std::endl;
	std::cout << "Speed print:\t" << printer.getSpeedPrint() << std::endl;
	std::cout << "------------------------" << std::endl;

	Scanner scanner("1234FFFF", "HP", 10);

	std::cout << "Serial number:\t" << scanner.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << scanner.getName() << std::endl;
	std::cout << "Speed read:\t" << scanner.getSpeedRead() << std::endl;
	std::cout << "------------------------" << std::endl;

	Computer computer("FFFFFFFF", "Asus", Computer::Cpu::Type::i7);
	Computer::Cpu cpu;

	std::cout << "Serial number:\t" << computer.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << computer.getName() << std::endl;
	cpu.print(computer.getTypeCpu());
	std::cout << "------------------------" << std::endl;

	Tablet tablet("AAAABBBB", "TeXet", 7);

	std::cout << "Serial number:\t" << tablet.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << tablet.getName() << std::endl;
	std::cout << "Diagonal:\t" << tablet.getDiagonal() << std::endl;
	std::cout << "------------------------" << std::endl;

	Technics technics("Acer");

	std::cout << "Serial number:\t" << technics.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << technics.getName() << std::endl;
	std::cout << "------------------------" << std::endl;

	Product product("0ABC1234");

	std::cout << "Serial number:\t" << technics.getSerialNumber() << std::endl;
	std::cout << "------------------------" << std::endl;

	product.showName();

	return 0;
}


