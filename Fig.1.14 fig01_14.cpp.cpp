#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1, num2;

	cout << "Digite dois inteiros  e lhe direi \n" << "quais o relacionamentos que eles satisfazem: ";
	cin >> num1 >> num2;

	if (num1 == num2)
		cout << num1 << "e igual a " << num2 << endl;

	if (num1 != num2)
		cout << num1 << "nao e igual a " << num2 << endl;

	if (num1 < num2)
		cout << num1 << "e maior que " << num2 << endl;

	if (num1 > num2)
		cout << num1 << "e menor que " << num2 << endl;

	if (num1 <= num2)
		cout << num1 << "e menor que ou igual a" << num2 << endl;

	if (num1 >= num2)
		cout << num1 << "e maior que ou igual a" << num2 << endl;

	return 0;
}