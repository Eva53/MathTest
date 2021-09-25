#include "Equation.h"

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void EquationAnswer::FindAnswer(Coeffs data, Answer& roots) {
	double D = (data.b * data.b - 4.0 * data.a * data.c);
	if (D < 0)
	{
		roots.num = 0;
	}
	if (D == 0)
	{
		roots.num = 1;
		roots.x1 = -data.b / (2.0 * data.a);
		roots.x2 = roots.x1;
	}
	if (D > 0)
	{
		roots.num = 2;
		roots.x1 = (-data.b + sqrt(D)) / (2.0 * data.a);
		roots.x2 = (-data.b - sqrt(D)) / (2.0 * data.a);
	}
}