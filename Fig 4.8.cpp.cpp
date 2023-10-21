// Fig 4.8.cpp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include<iostream>

using std::cout;
using std::endl;

int main()
{
	const int arraySyze = 12;
	int a[arraySyze] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };

	int total = 0;

	for (int i = 0; i <= arraySyze; i++)
		total += a [i];

	cout << " A soma dos  valores dos elementos do array he " << total << endl;

	return 0;
} 