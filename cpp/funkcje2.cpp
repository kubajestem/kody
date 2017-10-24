/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

//	int liczba = 0; //zmienne globalne
//  int krok = 0; //zmienne globalne

    //~void zwieksz1()
    //~{
        //~liczba += krok;
    //~}

    void zwieksz2(int liczba, int krok) // przekazywanie przez wartośc
    {
        cout << &liczba << " " << &krok << endl;
        liczba += krok;
        cout << "Liczba : " << liczba << endl;
    }
    
        void zwieksz3(int &liczba, int &krok) // przekazywanie przez refernecję
        // & - operator pobierania adresu, jeżeli w ten sposób 
        //sie przekaze to funkcja nie działa na kopiach tylko na oryginałach
    {
        liczba += krok;
        cout << "Liczba : " << liczba << endl;
    }

int main(int argc, char **argv)
{
    int liczba, krok; // zmienne lokalne
    liczba = krok = 0;
    
    cout << "Podaj liczbę i krok:" << endl;
    cin >> liczba >> krok;
    
    cout << &liczba << " " << &krok << endl;
    
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    
    cout << "Liczba : " << liczba << endl;
    cout << "Krok : " << krok << endl;
    
	return 0; 
}

// zmiena globalna - taka zmienna która jest zdefiniowana 
//w zasięgu pliku i jest dostępna w kążdej funckji którą 
//sobie napiszemy/którą mamy napisaną // definiuje się je na początku
// void - nie zwraca
