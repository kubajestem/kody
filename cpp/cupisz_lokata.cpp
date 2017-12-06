/*
 * cupisz_lokata.cpp
 * 
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
int suma, ile, wplata;

    cout << "Wprowadz ilosc wplat:";
    cin >> ile;
    
    wplata = 100;
    suma = 0;
    
    int i;
    
    for(i =0; i<ile; i++){
    suma += wplata;
    wplata +=  10;
    }
    
    cout << "Ostatnia wpłata jest równa: " << wplata-10 << endl;
    cout << "Stan konta: " << suma ;
    
    return 0;
}
	

