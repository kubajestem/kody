/*
 * petle.cpp
 * 
 */

// iteracja - powtarzanie czegoś
// for - powatarzanie czegos - petla
// klamry wyodrebiają blok kodu

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // iteracja
    int i;
    
    for (i = 0; i <= 100; i++) 
    
    // albo (2)x = 101 
    // operator inkrementacji - 
    // (inkrementacja - zwiększenie i++)/dekrementacja - zmniejszenie i--)
    // pętle można zagnieżdżać
    
    {
        if (i % 10 == 0) 
        {
            cout << i << endl;
        // i modulo 2
        // cout << '*' << endl;
        // "!=" rózne od
        }
    }
    return 0;
}

