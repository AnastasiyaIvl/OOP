#include "stdafx.h"
#include "Product.h"
#include <iostream>

Product::Product()
{
	_serialNumber = "000AAA";
}

Product::Product(std::string serialNumber) : Product()
{
	_serialNumber = serialNumber;
}

Product::~Product()	{}

std::string Product::getSerialNumber() const
{
	return _serialNumber;
}

void Product::setSerialNumber(std::string serialNumber)
{
	_serialNumber = serialNumber;
}

void Product::showName()
{
	std::cout << "Creator:\t" << Creator::_name << std::endl;
}
