#pragma once

#include <fstream>

#include "Equation.h"

using namespace std;

class Student {
protected:
	EquationAnswer answers;
public:
	Answer roots;
	string Name;

	Student(string name) : roots(), Name(name) {}

	virtual void SolveEquation(Coeffs& coeffs) {};

	void PrintToFile(ofstream& file, Coeffs& coeffs);
};

class GoodStudent : public Student {
public:
	GoodStudent(string name) : Student(name) {
	}
	virtual void SolveEquation(Coeffs& coeffs);

};

class NormalStudent : public Student {
public:
	NormalStudent(string name) : Student(name) {
	}
	virtual void SolveEquation(Coeffs& coeffs);
};

class BadStudent : public Student {
public:
	BadStudent(string name) : Student(name) {
	}
	virtual void SolveEquation(Coeffs& coeffs);
};