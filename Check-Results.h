#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include "Equation.h"

using namespace std;

class Checking {
public:
	string name;
	map<string, int> results;
	void CheckAnswers();
	void PrintResults();
private:
	EquationAnswer answers;
};