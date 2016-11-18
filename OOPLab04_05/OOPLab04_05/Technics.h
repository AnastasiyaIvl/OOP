#pragma once
#include <string>
#include "Product.h"

class Technics : public Product
{
public:
	Technics();
	Technics(std::string);
	Technics(std::string, std::string);

	~Technics();

	std::string getName() const;

	void setName(std::string);

private:
	std::string _name;
};
