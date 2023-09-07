//prog 2.9: fig02_09.cpp
//Programa para calculo de media da turma  c/repetição controlada  por sentinela.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::resetiosflags;

int main() {
	int total,                            //soma das nitas
		gradeCounter,                     //numero de notas didgitadas
		grade;                            //uma nota
	double average;                       //numero de pontos decimal para a média

	//fase de inicialização
	total = 0;
	gradeCounter = 0;

	//fase de processamento
	cout << "Forneca nota ou -1 para finalizar: ";
	cin >> grade;

	while (grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;
		cout << "Forneca nota ou -1 para finaliizar: ";
		cin >> grade;
	}

	//fase de término
	if (gradeCounter != 0)
	{
		average = static_cast<double>(total) / gradeCounter;
		cout << "A media da turma he " << setprecision(2)
			<< resetiosflags(ios::fixed | ios::showpoint)
			<< average << endl;
	}
	else {
		cout << "Nenhuma nota foi fornecida " << endl;
	}
	return 0;
}
