/*
 * cupisz_dzielniki.cpp
 * 
 */

#include <iostream>

using namespace std;

int dzielniki(int n)
{
    int dziel = 0;
    
    for(int i=1; i<=n;i++)
    {
        if(n%i == 0)
        {
            dziel++;
        }
    }
    return dziel;
}

int main(int argc, char **argv)
{
    int n = 0;
    
    cout<<"Podaj liczbe: ";
    cin>>n;
    
    cout<<"Ilosc dzielnikow liczby "<<n<<" jest rowna: "<< dzielniki(n);

    return 0;
}
