/*
 petle_znak.cpp
 */

#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
    char zn='0';
   
    while(zn !='t' && zn !='T' && zn !='n' && zn !='N' )
    {
        cout << "Podaj literę: ";
        cin >> zn;
    }
        cout << "Poprawna litera." << endl;
 
    return 0;
}

