
//pobierz trzy liczby całkowite od uzytkownika i wydrukuj większą
//a,b,c - licz. całk.


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 liczby: ";
    cin >> a >> b >> c;
    if (a > b) 
    {
        if (a > c) 
            cout << "najWiększe a=" << a;
        else
            cout << "najWiększe c=" << c;
         } 
         else if (b > a) 
        {
        if (b > c) 
            cout << "najWiększe b=" << b;
        else
            cout << "najWiększe c=" << c;
        } 
	return 0;
}
