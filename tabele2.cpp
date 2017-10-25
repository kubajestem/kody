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
int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar = 0; // wartość może być zmieniana
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    
	int liczby[rozmiar];
    int i;
    int suma = 0;
    
    pobierzDane(liczby, rozmiar);

    cout << "Podane oceny: " << endl;
        for(i = 0; i < rozmiar; i++) {
            suma += liczby[i];
            cout << liczby[i] << " " << endl;
    }
    
    
    cout << "Suma ocen: " << suma << endl;
    cout << "Srednia: " << float (suma)/ float (rozmiar) << endl;
	return 0;
}

