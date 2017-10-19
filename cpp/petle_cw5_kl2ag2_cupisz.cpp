#include <iostream>
 
using namespace std;
 
 
int main(int argc, char **argv)
{
    int l=0;
    int suma=0;
   
    cout<<"Podaj liczbę: ";
    cin>>l;
   
    while(1)
    {
   
        while(l>0)
        {
            suma+=l%10;
            l/=10;
        }
       
        cout <<"Suma cyfr: "<< suma << endl;
       
        if(suma>0 && suma<10)
        {
            break;
        }else
        {
            l+=suma;
            suma=0;
        }
    }
   
    return 0;
}
