#include <iostream>

using namespace std;
void tworzenie(float*& tab, int w) {
	tab = new float[w];
	float liczba;
	int temp = 1;
	for (int i = 0; i < w; i++) {
		cin >> liczba;
		tab[i] = liczba;
		temp++;
	}
}
void wyswietl(float* a, int w) {
	for (int i = 0; i < w; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void wartosciBez(float* tabB, int w) {
	float temp;
	for (int i = 0; i < w; i++)
	{
		if (tabB[i] < 0) {
			tabB[i] = -(tabB[i]);
		}
	}
	cout << endl;
}
void sortowanie(float* tabs, int w) {
	float pom;
	for (int i = 0; i < w; i++)
		for (int j = 0; j < w - i - 1; j++)
			if (tabs[j] > tabs[j + 1]) {
				pom = tabs[j];
				tabs[j] = tabs[j + 1];
				tabs[j + 1] = pom;
			}
}
int main(int argc, char** argv) {
	float* tab;
	int rozmiar;
	cout << "Podaj rozmiar zbioru" << endl;
	cin >> rozmiar;
	tworzenie(tab, rozmiar);
	wartosciBez(tab, rozmiar);
	sortowanie(tab, rozmiar);
	cout << endl << "Posortowane:" << endl;
	wyswietl(tab, rozmiar);
	return 0;
}