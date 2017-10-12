/*
 * kalkulator.cpp 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char znak; // +, -, *, /
    
    cout << "Podaj znak działania: ";
    cin >> znak;
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
      
    if (znak == '+')    
    { cout << "Suma: " << a + b ;
         }
    if (znak == '-')    
    { cout << "Różnica: " << a - b ;
         }
    if (znak == '*')    
    { cout << "Iloczyn: " << a * b ;
         }
    if (znak == '/')    
    { cout << "Iloraz: " << a / b ;
         }
    
    return 0;
}

