
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
    if (a > b && a > c) 
    {
            cout << "najWiększe a=" << a;
    } 
    if (b > a && b > c) 
    {
            cout << "najWiększe b=" << b;
    } 
    if (c > a && c > b) 
    {
            cout << "najWiększe c=" << c;
    } 
    if (a == b && a > c) 
    {
            cout << "najWiększe a i b=" << a;
    } 
    if (a == c && a > b) 
    {
            cout << "najWiększe a i c=" << a;
    } 
    if (c == b && c > a) 
    {
            cout << "najWiększe b i c=" << b;
    } 
    if (c == b && c == a) 
    {
            cout << "wszystkie liczby są równe " << a;
    } 
	return 0;
}
