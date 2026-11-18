#include <iostream>
using namespace std;
int main()
{

	/*ZADANIE 1*/
	/*int tab[10];
    cout << "Podaj wartosci tablicy (10): ";
	for (int i = 0; i < 10; i++) {
		cin >> tab[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << tab[i] << " ";
	}*/

	/*ZADANIE 2*/
		/*int n;
		cout << "Podaj ile liczb Fibbonacciego chcesz wyswietlic: ";
		cin >> n;
		int* table = new int[n];
		table[0] = 0; table[1] = 1;
		cout << table[0] << " " << table[1] << " ";
		for (int i = 2; i < n; i++) {
			int f = table[i - 1] + table[i - 2];
			table[i] = f;
			cout << table[i] << " ";
		}*/

	/*ZADANIE 3*/
	/*int tab[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		tab[i] = rand();
	}
	int s = 0;
	for (int i = 0; i < 10; i++) {
		s += tab[i];
	}
	s = s / 10;
	int n = 0;
	cout << "Srednia: " << s << endl;
	for (int i = 0; i < 10; i++) {
		if (tab[i] < s) {
			n++;
		}
	}
	cout << "Liczba liczb mniejszych od sredniej: " << n << endl;
	int min = tab[0];
	int max = tab[0];
	for (int i = 1; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	cout << "Najmniejsza: " << min << endl;
	cout << "Najwieksza: " << max << endl;*/

	/*ZADANIE 4*/
	/*int tab[10]{tab[0] = 0, tab[1] = 0, tab[2] = 0, tab[3] = 0, tab[4] = 0, tab[5] = 0, tab[6] = 0, tab[7] = 0, tab[8] = 0, tab[9] = 0};
	cout << "Ile liczb chcesz podac [1-10]: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}*/
}