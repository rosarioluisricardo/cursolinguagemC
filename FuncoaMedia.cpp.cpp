// FuncoaMedia.cpp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

float media(float, float);

int main()
{
	float a = media(8, 10);
	float b = 12 + media(15, media(4, 2)) + a;
	cout << "As aulas tem " << b + media(20, 40) << "horas. \n";
}

float media(float x, float y)
{
	float num = (x + y) / 2;
	return num;
}