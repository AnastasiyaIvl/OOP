#pragma once
#include "Technics.h"

class Scanner : public Technics
{
public:
	Scanner();
	Scanner(int);
	Scanner(std::string, std::string, int);

	~Scanner();

	int getSpeedRead() const;

	void setSpeedRead(int);

private:
	int _speedRead;

	bool isCorrect(int);
};
