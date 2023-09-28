#include <iostream>

using namespace std;

int main() {
	int total,
		gradeCounter,
		grade,
		average = 0;

	//fase de inicialização
	total = 0;
	gradeCounter = 1;

	//fase de processamento
	while (gradeCounter <= 10)
	{
		cout << "Forneca nota:";
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;

	}
	//fase de termino
	average = total / 10;

	cout << "A mediada turma he "<< average << endl;

	return 0;
}