#include "Equation.h"
#include "Check-Results.h"

void Checking::CheckAnswers() {

	ifstream Results("results.txt");

	int numRoots;
	double ans[2];
	string Name;
	Answer roots;
	Coeffs coeffs;

	while (Results >> Name >> coeffs.a >> coeffs.b >> coeffs.c >> numRoots >> ans[0] >> ans[1]) {
		answers.FindAnswer(coeffs, roots);
		if (results.count(Name) == 0) {
			results.emplace(Name, 0);
		}
		if (roots.x1 == ans[0] && roots.x2 == ans[1] && roots.num == numRoots) {
			results.at(Name)++;
		}
	}
	Results.close();
}

void Checking::PrintResults() {
	for (auto result : results) {
		cout << result.first << " - " << result.second << endl;
	}
}