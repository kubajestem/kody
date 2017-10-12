/*
 * petle_cw1_kl2ag2_Cupisz.cpp
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)

{
	int liczba = 0 ;
	while (true)
	 {
		 cout << "Podaj liczbę :  "<< endl;
		 cin>> liczba;
		 if (liczba % liczba == 0 && liczba >0)
		 cout<< "Kwadrat :  "<<liczba * liczba << endl;
		 cout <<  "Pierwiastek :  "<< sqrt( liczba) << endl;
		 break;
		} 
 
	
return 0;
}
