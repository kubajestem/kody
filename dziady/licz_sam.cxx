/*
 * licz_sam.cxx
 */


#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

int liczZnaki(char plik[]){
        ifstream wejscie(plik);
        if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        char plik2[15];
        strcpy(plik2, plik);
        char *wsk;
        wsk = strstr(plik2, ".txt");
        strncpy(wsk, ".bak", 4);
        ofstream wyjscie(plik2);
        if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
        char z;
        int ilesam;
        ilesam = 0;
        
        while(!wejscie.eof()) {
            wejscie.get(z);
            if (wejscie && z =='a'|| z =='e' || z =='i' || z =='o' || z =='u') {
                ilesam++;
                    wyjscie.put(z);
                }
            }
        
        
        wejscie.close(); wyjscie.close();
        cout << setw(10) << "Samogłosek:" << ilesam << endl;
        return ilesam;
}

int sumuj(char plik[]) {
    ifstream wejscie(plik);
    if (!wejscie) { cout << "Błąd otawrcia pliku!"; return 0;}
    float suma = 0;
    float liczba = 0;
    while(!wejscie.eof()){
        wejscie >> liczba;
        suma += liczba;
        };
}

int main(int argc, char **argv)
{
    char nazwa[15];
    cout << "Podaj nazwę pliku: ";
    cin >> nazwa;
    liczZnaki(nazwa);
    sumuj(nazwa);
	return 0;
}

