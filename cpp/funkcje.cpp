/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void dodaj (int a, int b)
{
    cout << "Suma:" << a + b << endl;
    // nawiasy oznaczające ciało funkcji
// nie zwracam zwracam wyniku 
/// jak void to nie ma return jak co innego jest

} 

int odejmij(int l1, int l2)
{
    return l1 - l2;
}

void mnoz (int a, int b)
{
    cout << "Iloczyn:" << a * b << endl;
} 

int dziel(int l1, int l2)
{   if (l2 == 0)
    {
    cout << "Nie dzieli się przez 0" << endl;
    return 0;
    }
    return l1 / l2;
}

int main(int argc, char **a67rgv)
{
	int a, b;
    a = b = 0;
    
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b; 
    
    dodaj(a, b); // wywołanie funkcji 
    cout  << "Różnica: " << odejmij(a, b) << endl;
    mnoz(a, b);
    cout  << "Iloraz: " << dziel(a, b) << endl;
    
    // po nazwie funkcji zawsze wystepują nawiasy , funckjie tworzy sie po to aby moc je wielokrotnie uzyc
    
	return 0; // zwracana wartość
}

