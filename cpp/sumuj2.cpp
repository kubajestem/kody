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
    int suma = 0; // suma kolejnych liczb
    int liczba = 0; //liczba wprowadzana
    
    for (;;)   // pętla nieskonczona
     
    
    {
            
            cout << "Podaj liczbę: " << endl;
            cin >> liczba;
            //suma = suma + liczba;
            suma += liczba;
            if (suma > 100) break; 
    }
    
    cout << "Suma: " << suma << endl;
    return 0;
}

