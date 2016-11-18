#pragma once
#include "Technics.h"

class Tablet : public Technics
{
public:
	Tablet();
	Tablet(int);
	Tablet(std::string, std::string, int);

	~Tablet();

	int getDiagonal() const;

	void setDiagonal(int);

private:
	int _diagonal;

	bool isCorrect(int);
};
