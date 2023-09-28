// CalculandoJuroComposto.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Fig 2.21
//Calculando juro Composto

#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main()
{
	double amount,                                //quantia de deposito
		principal = 1000.0,                       //inicializando o captal
		rate = .05;                               //taxa de juro

	cout << "Ano" << setw(21)
		 << "Quantia em deposito" << endl;

	//ajustando  o formato de números em ponto flutuante.
	cout << setiosflags(ios::fixed | ios::showpoint)
		<< setprecision(2);

	for (int year = 1; year <= 10; year++)
	{
		amount = principal * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(21) << amount << endl;
	}
	return 0;
}