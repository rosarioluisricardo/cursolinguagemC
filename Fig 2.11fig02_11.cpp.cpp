//Fig. 2.11: fig02_11.cpp
//Analise dos resultados dos testes
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	//Inicializa as variaveis nas declarações
	int passes = 0,                //numeros de aprovados
		failures = 0,             //numero de reprovações
		studentCounter = 1,      //contador de estudantes
		result;				    //um ressultado de teste

	//processa 10 estudantes; ciclo controlado por contador
	while (studentCounter <= 10)
	{
		cout << "Forneca resultado (1 = aprovado, 2 = reprovado): ";
		cin >> result;

		if (result == 1)                            //if e else aninhado com while
			passes = passes + 1;
		else
			failures = failures + 1;

		    studentCounter = studentCounter + 1;
	}

	//Fase de termino
	cout << "Aprovado " << passes << endl;
	cout << "Reprovado " << failures << endl;

	if (passes > 8)
		cout << "Aumente o preco do curso " << endl;

	return 0;
}