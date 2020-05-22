// Zadanie12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void sortowanie_babelkowe(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++) //pętla wewnętrzna
            if (tab[j - 1] < tab[j])
                //zamiana miejscami
                swap(tab[j - 1], tab[j]);
}

int main()
{
    int liczba_p;
    int i = 1;
    int* tab, n;
    std::cout << "Wpisz liczbe p: ";
    std::cin >> liczba_p;
    tab = new int[liczba_p];
    for (int i = 0; i < liczba_p; i++) {
        tab[i] = i;
    }
    //for (int i = liczba_p; i >0; i--)
    //{
        // jeżeli x dzielone modulo przez i(licznik) jest równe zero to wypisz liczbę
      //  if (liczba_p % i == 0) std::cout << i << " ";

    sortowanie_babelkowe(tab, liczba_p);
    for (int i = 1; i <= liczba_p; i++)
        if (liczba_p % i == 0) {
               cout << i << " ";
            }
}
