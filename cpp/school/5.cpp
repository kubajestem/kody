/*
 * petle_cw4_kl2ag2_Cupisz.cpp
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)

{
	int liczba, suma = 0;
		cout << "Podaj liczbe: ";
		cin >> liczba;
	 int bez = abs(liczba);
	 while (bez > 0)
		{
			suma += bez%10;
			bez /= 10;
		}
cout << "Suma cyfr podanej liczby wynosi: " << suma << endl;
return 0;
}
 
	

