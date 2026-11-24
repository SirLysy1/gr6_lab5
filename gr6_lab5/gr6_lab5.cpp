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

	/*ZADANIE 5*/
		/*int tab[10];
		srand(time(NULL));
		for (int i = 0; i <10; i++) {
			tab[i] = rand() % 10;
			cout << tab[i] << " ";
		}
		cout << endl;
		int sl = rand() % 10;
		int ir = 0;
		cout << "Szczesliwa liczba to " << sl << endl;
		for (int j = 0; j < 10; j++) {
			if (tab[j] == sl) {
				ir++;
			}
		}
		cout << "Sczesliwa liczba pojawila sie " << ir << " razy.";*/

	/*ZADANIE 6*/
		/*int tab1[2][2] = {{1, 6},{6, 4}};
		int tab2[2][2] = { {5, 9},{2, 3} };
		int tab3[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				tab3[i][j] = tab1[i][j] + tab2[i][j];
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << tab3[i][j] << " ";
			}
		}*/

	/*ZADANIE 7*/
		/*int tab1[2][2] = {{1, 6},{6, 4}};
		int tab2[2][2] = { {5, 9},{2, 3} };
		int tab3[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				int s = 0;
				for (int k = 0; k < 2; k++) {
					s += tab1[i][k] * tab2[k][j];
				}
				tab3[i][j] = s;
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << tab3[i][j] << " ";
			}
		}*/
	
	/*ZADANIE 8*/
		/*int tab[2][2];
		int n, s = 0;
		cout << "Podaj liczby do macierzy 2x2: ";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> n;
				tab[i][j] = n;
			}
		}
		for (int i = 0; i < 2; i++) {
			s += tab[i][i];
		}
		cout << s;*/

	/*ZADANIE 9*/
		/*int tab[10], t;
		cout << "Podaj wartosci tablicy (10): ";
		for (int i = 0; i < 10; i++) {
			cin >> tab[i];
		}
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				t = tab[j];
				if (tab[j] < tab[j + 1]) {
					tab[j] = tab[j + 1];
					tab[j + 1] = t;
				}
			}
		}
		cout << "Postortowana tablica od najwiekszej do najmniejszej: ";
		for (int i = 0; i < 10; i++) {
			cout << tab[i] << " ";
		}*/

	/*ZADANIE 10*/
		/*int tab[8][8] = { {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1},
						    {1, 1, 1, 1, 1, 1, 1, 1} };
		for (int i = 0; i < 8; i++) {
			int s = 0;
			for (int j = 0; j < 8; j++) {
				s += tab[i][j];
			}
			cout << "Suma wiersza " << i + 1 << ": " << s << endl;
		}
		for (int j = 0; j < 8; j++) {
			int s = 0;
			for (int i = 0; i < 8; i++) {
				s += tab[i][j];
			}
			cout << "Suma kolumny " << j + 1 << ": " << s << endl;
		}
		int s = 0;
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 8; i++) {
				s += tab[i][j];
			}
		}
		cout << "Suma wszystkich elementow macierzy: " << s << endl;*/

	/*ZADANIE 11*/
		/*int tab[8][6] = {{1, 1, 1, 1, 1, 1},
						  {1, 1, 5, 1, 1, 1},
						  {1, 1, 1, 1, 1, 1},
						  {0, 1, 1, 1, 2, 1},
						  {1, 1, 1, 1, 1, 1},
						  {1, 1, 1, 1, 1, 7},
						  {1, 6, 1, 9, 1, 1},
						  {1, 1, 1, 1, 1, 1} };
		int nm = tab[0][0];
		int nw = tab[0][0];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 6; j++) {
				int nnm = tab[i][j];
				int nnw = tab[i][j];
				if (nnm < nm) {
					nm = nnm;
				}
				if (nnw > nw) {
					nw = nnw;
				}
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 6; j++) {
				if (tab[i][j] == nm) {
					cout << "Najmniejsza wartosc w macierzy to: " << nm << " a jej koordynaty to: " << i+1 << " i " << j+1 << endl;
				}
				if (tab[i][j] == nw) {
					cout << "Najmniejsza wartosc w macierzy to: " << nw << " a jej koordynaty to: " << i+1 << " i " << j+1 << endl;
				}
			}
		}*/

	/*ZADANIE 12*/
		/*int s = 0;
		int tab[6][6] = { {1, 2, 3, 4, 5, 6},
						  {1, 2, 3, 4, 5, 6},
						  {1, 2, 3, 4, 5, 6},
						  {1, 2, 3, 4, 5, 6},
						  {1, 2, 3, 4, 5, 6},
						  {1, 2, 3, 4, 5, 6} };
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (i + j == 5) {
					s += tab[i][j];
				}
			}
		}
		cout << s;*/
}
