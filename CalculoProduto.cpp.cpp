#include <iostream>
using namespace std;

int main() {

	float numero1, numero2;

	cout << "Digite o numero primeiro numero: \n";
	cin >> numero1;
	cout << "Digite o numero segundo numero: \n";
	cin >> numero2;

	cout << "Soma:" << numero1 + numero2 << endl;
	cout << "Prduto:" << numero1 * numero2 << endl;
	cout << "Diferença:" << numero1 - numero2 << endl;
	cout << "Quociente:" << numero1 / numero2 << endl;

	return 0;
}