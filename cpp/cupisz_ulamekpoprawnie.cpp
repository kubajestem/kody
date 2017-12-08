/*
 * cupisz_ulamek.cpp
 * 
 * 
 */


#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(a > 0)
    {
        a = a%b;
        b -= a;
    }
    return b;
}


int main(int argc, char **argv)
{
    int li = 0;
    int mian = 0;
    
    cout<<"Podaj licznik: ";
    cin>>li;
    cout<<"Podaj mianowkik: ";
    cin>>mian;
    
    cout<<"Ulamek po skroceniu: "<<(li/nwd(li,mian))<<'/'<<(mian/nwd(li,mian));
    return 0;
}

