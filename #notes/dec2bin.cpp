/*
 * dec2bin.cpp
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znakA ='A';
    char znakB ='B';
    cout << (int)znakA << (int)znakB << endl;
    // dane wejściowe
    int reszty[16];
    int liczba = 0;
    // 120 - 64 = 56
    // 56 - 32 = 24
    // 24 - 16 = 8
    // 8 - 8 = 0
    // 1111000
    int podstawa = 0;
    
    cout<< "Podaj liczbę i podstawę: ";
    cin >> liczba >> podstawa;

    
    // algorytm
    int i = 0; // indeks tabeli 
    do {  //pętla wykona się przynajmnie raz
        reszty[i] = liczba % podstawa;
        liczba = liczba / podstawa;
        i++;
    } while(liczba > 0);
    
    cout << reszty << endl;
	
    
    //~for (int j = i - 1; j > 0; j-- ){
       //~cout << reszty[j];
    //~}
   // i--;
    while(i-1 >= 0){
        i--;
        cout << reszty[i];
        }
    
    
	return 0;
}

