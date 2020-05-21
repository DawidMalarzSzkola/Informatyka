#include <iostream>

int DziesietnaNaBinarna(int liczba_dziesietna)
{
    if (liczba_dziesietna == 0) {
        return 0;
    }
    else
    {
        return (liczba_dziesietna % 2 + 10 * DziesietnaNaBinarna(liczba_dziesietna / 2));
    }
        
}

int main()
{   
    int liczba_dziesietna;
    std::cout << "Wpisz liczbe dziesietna: ";
    std::cin >> liczba_dziesietna;
    std::cout << "Liczba binarna: ";
    std::cout << DziesietnaNaBinarna(liczba_dziesietna);
    return 0;
}
