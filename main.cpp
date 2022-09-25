#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;

    int liczba = 9;
    int * wsk_liczba; /*--deklaracja wskaünika
    na int--*/
    wsk_liczba = & liczba; /* przypisanie wskaünikowi
    adresu int */
    //dwa sposoby wyúwietlenia wartoúci liczba
    cout << "Zmienna liczba = " << liczba
    << "\ni *wsk_liczba jako zmienna liczba = "
    << * wsk_liczba
    << endl;
    //dwa sposoby wyúwietlenia adresu zmiennej
    cout << "Adres liczby = " << & liczba
    << "\ni wsk_liczba jako adres liczby = "
    << wsk_liczba
    << endl;
    //zmiana wartoúci za pomocπ wskaünika
    * wsk_liczba = * wsk_liczba + 1;
    cout << "Liczba = " << liczba;

    getch();
    return 0;
}
