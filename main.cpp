#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;

    int liczba = 9;
    int * wsk_liczba; /*--deklaracja wska�nika
    na int--*/
    wsk_liczba = & liczba; /* przypisanie wska�nikowi
    adresu int */
    //dwa sposoby wy�wietlenia warto�ci liczba
    cout << "Zmienna liczba = " << liczba
    << "\ni *wsk_liczba jako zmienna liczba = "
    << * wsk_liczba
    << endl;
    //dwa sposoby wy�wietlenia adresu zmiennej
    cout << "Adres liczby = " << & liczba
    << "\ni wsk_liczba jako adres liczby = "
    << wsk_liczba
    << endl;
    //zmiana warto�ci za pomoc� wska�nika
    * wsk_liczba = * wsk_liczba + 1;
    cout << "Liczba = " << liczba;

    getch();
    return 0;
}
