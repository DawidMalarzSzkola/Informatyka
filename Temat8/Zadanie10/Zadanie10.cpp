#include <iostream>
#include <cstdlib>
#include <string>

int Hex2Dec(std::string hex)
{
    int dziesietna = strtol(hex.c_str(), NULL, 16);

    return dziesietna;
}

std::string Dec2Hex(int dziesietna)
{
    char heksadecymalna[255];
    itoa(dziesietna, heksadecymalna, 16);
    return (std::string) heksadecymalna;
}

int main()
{
    int wybor;
    std::string liczba_hex;
    int liczba_dziesietna;
    std::cout << "Wybierz opcje zmiany liczby: 1. Hex2Dec\n 2. Dec2Hex";
    std::cin >> wybor;

    switch (wybor) {
    case 1:

        std::cout << "Podaj liczbe heksadecymalna:";
        std::cin >> liczba_hex;
        std::cout << Hex2Dec(liczba_hex);
        break;
    case 2:
        std::cout << "Podaj liczbe dziesietna:";
        std::cin >> liczba_dziesietna;
        std::cout << Dec2Hex(liczba_dziesietna);
        break;
    }
    return 0;
}