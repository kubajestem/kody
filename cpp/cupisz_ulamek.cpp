/*
 * cupisz_ulamek.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv){
    
int licznik,mianownik,i;

    cout << "Podaj licznik: ";
    cin >> licznik;
    cout << "Podaj mianownik: ";
    cin >> mianownik;
    
    for (i = mianownik; i>1; i--) {
    licznik = licznik/i;
    mianownik = mianownik/i;
    }
 
}

cout << "Ułamek wynosi " << licznik << "/" << mianownik << endl;
	
return 0;

