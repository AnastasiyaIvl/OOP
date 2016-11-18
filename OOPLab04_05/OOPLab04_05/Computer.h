#pragma once
#include "Technics.h"

class Computer : public Technics
{
public:
	Computer();
	Computer(int);
	Computer(std::string, std::string, int);

	~Computer();

	int getTypeCpu() const;
	void setTypeCpu(int);
	static void show(int);

	class Cpu
	{
	public:
		enum Type
		{
			i3, i5, i7
		};

		static void print(int);
	};

private:
	int _typeCpu;

	bool isCorrect(int);
};
