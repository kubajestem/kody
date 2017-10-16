/*
 * sumuj.cpp
 * 
 */

// iteracja - powtarzanie czegoś
// for - powatarzanie czegos - petla
// klamry wyodrebiają blok kodu

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // iteracja
    int i;
    int suma = 0; // suma kolejnych liczb
    int liczba = 0; //liczba wprowadzana
    int ile_razy = 0;
    
    cout << "Ile liczb podasz?";
    cin >> ile_razy;
    
    for (i = 0; i < ile_razy; i++) // powtarza okresloną ilosc razy 1. wartosc zmiennej 2.warunek, 3. co ma sie stac 
    
    {
            
            cout << "Podaj liczbę: " << endl;
            cin >> liczba;
            //suma = suma + liczba;
            suma += liczba;
    }
    
    cout << "Suma: " << suma << endl;
    return 0;
}

