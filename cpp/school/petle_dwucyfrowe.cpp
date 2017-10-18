/*
 program który wypisuje wszystkie dwucyfrowe liczby parzyste podzielne przez 3 w zakresie <m,n> podanym przez użytkownika
 */

#include <iostream>


using namespace std;

int main(int argc, char **argv)


{
        int m, n;
        
        while (m<10 || n>99 || m>n) 
        {
        cout << "Podaj zakres <m, n> <10,99>" << endl;
        cin >> m >> n;
        }
        while (m<=n)
        { if (m/2 == 0 && m%3 == 0)
            {
                cout<< m << endl;
            }
            m++;
        }
    return 0;
        }

