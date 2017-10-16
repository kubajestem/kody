
//pobierz dwie liczby całkowite od uzytkownika i wydrukuj większą
//a,b - licz. całk.


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;
    if (a > b) {
            cout << "Większe a=";
            cout << a;
        } else if (b > a) 
        {
            cout << "Większe b=";
            cout << b;
        } else //if (a == b) 
        {
            cout << "Równe, a=" << a << ", b=" <<b;
            cout << a;
        }
	return 0;
}
