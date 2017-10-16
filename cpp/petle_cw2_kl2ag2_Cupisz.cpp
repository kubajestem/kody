/*
 * petle_cw2_kl2ag2_Cupisz.cpp
 */


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)

{
	int a ,b ,c ;
	int obwod = 0;
    float p = 0; 
	
	 while (true)
{
	cout << "Podaj boki trojkata:  ";
	cin >> a >> b >> c;
	if (a + b >= c && a + c >= b && c +b >= a)
	{
	    obwod = a + b + c ;
        p = 0.5 * obwod;
        cout << "Pole :  " <<  sqrt (p* (p-a) * (p-b) *(p-c)) << endl;
		}
	}
	return 0;
}
 
	

