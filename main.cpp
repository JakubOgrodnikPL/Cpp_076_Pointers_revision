#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;

    int liczba = 9;
    int * wsk_liczba; /*--deklaracja wskaźnika
    na int--*/
    wsk_liczba = & liczba; /* przypisanie wskaźnikowi
    adresu int */
    //dwa sposoby wyświetlenia wartości liczba
    cout << "Zmienna liczba = " << liczba
    << "\ni *wsk_liczba jako zmienna liczba = "
    << * wsk_liczba
    << endl;
    //dwa sposoby wyświetlenia adresu zmiennej
    cout << "Adres liczby = " << & liczba
    << "\ni wsk_liczba jako adres liczby = "
    << wsk_liczba
    << endl;
    //zmiana wartości za pomocą wskaźnika
    * wsk_liczba = * wsk_liczba + 1;
    cout << "Liczba = " << liczba;

    getch();
    return 0;
}
