/*
 * tablice.cpp
 */


#include <iostream>

using namespace std; 

void pobierzDane(int tab[], int ile) {
    int i;
    cout << "Podaj " << ile << " liczb: " << endl; 
    for(i = 0; i < ile; i++) {
        cin >> tab[i];
    }
}

int sumuj(int tab[], int ile) {
    int i;
    int suma = 0;
    cout << "Podane oceny: " << endl;
        for(i = 0; i < ile; i++) {
            cout << tab[i] << " ";
            suma += tab[i];
    }
     return suma;
}
    
int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar = 0; // wartość może być zmieniana
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    
	int liczby[rozmiar];

    
    pobierzDane(liczby, rozmiar);

    
    
    
    cout << "Suma ocen: " << sumuj(liczby, rozmiar) << endl;
    //cout << "Srednia: " << float (suma)/ float (rozmiar) << endl;
	return 0;
}

