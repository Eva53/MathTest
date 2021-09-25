#include "Student.h"
#include "Check-Results.h"
#include "Equation.h"

using namespace std;

int main(void) {
	ifstream equations("equations.txt");
	ofstream results("results.txt");

	Coeffs coeffs;
	Checking check;
	GoodStudent st1("Denis");
	GoodStudent st2("Ivan");
	GoodStudent st3("Mark");
	NormalStudent st4("Artem");
	NormalStudent st5("Daniil");
	NormalStudent st6("Vlada");
	BadStudent st7("Sofya");
	BadStudent st8("Anna");
	BadStudent st9("Alex");

	while (equations >> coeffs.a >> coeffs.b >> coeffs.c) {
		st1.SolveEquation(coeffs);
		st1.PrintToFile(results, coeffs);
		st2.SolveEquation(coeffs);
		st2.PrintToFile(results, coeffs);
		st3.SolveEquation(coeffs);
		st3.PrintToFile(results, coeffs);
		st4.SolveEquation(coeffs);
		st4.PrintToFile(results, coeffs);
		st5.SolveEquation(coeffs);
		st5.PrintToFile(results, coeffs);
		st6.SolveEquation(coeffs);
		st6.PrintToFile(results, coeffs);
		st7.SolveEquation(coeffs);
		st7.PrintToFile(results, coeffs);
		st8.SolveEquation(coeffs);
		st8.PrintToFile(results, coeffs);
		st9.SolveEquation(coeffs);
		st9.PrintToFile(results, coeffs);
	}

	check.CheckAnswers();
	check.PrintResults();
	results.close();
	equations.close();
	return 0;
}
