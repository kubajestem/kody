/*
 * horner.cpp
 */


#include <iostream>

using namespace std;

// W(x) = 2x^3 + 3x^2 + 5x + 4 (8)
// W(x) = x (2x^2 + 3x + 5) + 4
// W(x) = x ( x (2x+3) + 5) + 4 (3)


int main(int argc, char **argv)
{   float wspl[4];
    float x;
    
    cout<<"Podaj wartość x "<<endl;
    cin>> x;
    
    int i;
    
    for(i=0; i<4 ;i++)
    {
       cout << "Podaj współczynniki ";
       cin >> wspl[4];
}

	
	return 0;
}

