#pragma once
#include <string>

class Creator
{
public:
	virtual void showName() = 0;

	virtual ~Creator();

protected:
	std::string _name;

	Creator();
};
