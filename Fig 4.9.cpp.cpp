#include<iostream>

using std::cout;
using std::endl;

#include<iomanip>

using std::setw;

int main()
{
	const int responseSize = 40, frequencySize = 11;
	int responses[responseSize] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3,
	8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
	5, 6, 6, 5, 7, 5, 6, 4, 8, 6, 8, 10 };

	int frequency[frequencySize] = { 0 };

	for (int answer = 0; answer < responseSize; answer++)
		++frequency[responses[answer]];

	cout << "Avaliação" << setw(17) << "Frequencia" << endl;

	for (int rating = 1; rating < frequencySize; rating++)
		cout << setw(6) << rating
		<< setw(17) << frequency[rating] << endl;

	return 0;
}