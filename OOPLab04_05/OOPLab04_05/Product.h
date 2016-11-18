#pragma once
#include <string>
#include "Creator.h"

class Product : public Creator
{
public:
	Product();
	Product(std::string);

	~Product();

	std::string getSerialNumber() const;
	void setSerialNumber(std::string);
	void showName() override;

private:
	std::string _serialNumber;
};
