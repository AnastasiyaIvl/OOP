#pragma once
#include "Technics.h"

class Printer : public Technics
{
public:
	Printer();
	Printer(int);
	Printer(std::string, std::string, int);

	~Printer();

	int getSpeedPrint() const;

	void setSpeedPrint(int);
private:
	int _speedPrint;

	bool isCorrect(int);
};
