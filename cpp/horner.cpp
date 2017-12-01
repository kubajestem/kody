/*
 * horner.cpp
 */


#include <iostream>

using namespace std;

// W(x) = 2x^3 + 3x^2 + 5x + 4 (8)
// W(x) = x (2x^2 + 3x + 5) + 4
// W(x) = x ( x (2x+3) + 5) + 4 (3)


float horner_it(int k, float wspl[], float x){
    float wynik = wspl[0];
    for (int i = 1; i < k+1; i++){
    wynik = wynik * x + wspl[i];
    }
    return wynik;
}


int main(int argc, char **argv)
{   float wspl[4];
    float x;
    int stopien = 3;
    
    cout<<"Podaj argument "<<endl;
    cin>> x;
    
    int i;
    
    for(i=0; i<4 ;i++) {
       cout << "Podaj współczynniki: ";
       cin >> wspl[4];
    }

	cout << "Wartość wielomianu: " << horner_it(stopien, wspl, x) << endl;
	return 0;
}

