#pragma once

#include <iostream>

struct Coeffs {
	double a;
	double b;
	double c;
	double D;
};

struct Answer {
	int num;
	double x1;
	double x2;
};

class EquationAnswer {
public:
	void FindAnswer(Coeffs coeffs, Answer& roots);
};