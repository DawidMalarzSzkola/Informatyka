#include <iostream>
#include <cmath>
// Dawid Malarz

int BinarnaNaDziesietna(long long liczba_binarna)
{
    int liczba_decymalna = 0;
    int i = 0;
    int tmp = 0;

    while (liczba_binarna != 0)
    {
        tmp = liczba_binarna % 10;
        liczba_binarna /= 10;
        // pow() => potegowanie
        liczba_decymalna += tmp * pow(2, i);
        ++i;
    }
    return liczba_decymalna;
}

int main()
{
    long long liczba_binarna;

    std::cout << "Wpisz liczbe binarna: ";
    std::cin >> liczba_binarna;

    std::cout << "Konwertowanie";
    std::cout << "Liczba dziesietna to: " << BinarnaNaDziesietna(liczba_binarna);
    return 0;
}

