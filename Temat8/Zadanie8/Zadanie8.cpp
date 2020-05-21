#include<iostream>


void DecymalnaDoBinarnej(int liczba_dziesietna)
{ 
    int binary[32]; // Int ma 4 bajty, czyli max 32 bity
    int i = 0;
    while (liczba_dziesietna > 0) {
        binary[i] = liczba_dziesietna % 2;
        liczba_dziesietna = liczba_dziesietna / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        std::cout << binary[j];
}


int main ()
{
    int liczba_dziesietna, liczba_binarna;
    std::cout << "Wpisz liczbe dziesietna: ";
    std::cin >> liczba_dziesietna;
    std::cout << "Liczba binarna to ", DecymalnaDoBinarnej(liczba_dziesietna);
}