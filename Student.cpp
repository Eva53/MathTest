#include "Student.h"

void Student::PrintToFile(ofstream& file, Coeffs& coeffs) {
	file << Name << " " << endl;
	file << coeffs.a << " " << coeffs.b << " " << coeffs.c << " " << endl;
	file << roots.num << " ";
	file << roots.x1 << " " << roots.x2 << endl;
}

void GoodStudent::SolveEquation(Coeffs& coeffs) {
	answers.FindAnswer(coeffs, roots);
}

void NormalStudent::SolveEquation(Coeffs& coeffs) {
	if (rand() % 2 == 0) {
		answers.FindAnswer(coeffs, roots);
	}
	else {
		Student::SolveEquation(coeffs);
	}
}

void BadStudent::SolveEquation(Coeffs& coeffs) {
	roots.num = 1;
	roots.x1 = 0;
}
