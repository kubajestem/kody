/*
 petle_switch.cpp
 * Program pobiera numer miesiąca i wyświetla jego nazwę
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    int m = 0;
    
    //while (true) {
        //cout << "Podaj miesiąc: " << endl;
        //cin >> m;
        //if ( m <= 12 && m> 0 )
            //break;
  //};
  
  //pętla zaporowa
  
   while (m > 12 || m < 1) {
        cout << "Podaj miesiąc (1-12): " << endl;
        cin >> m;
  };
  
  //if ( m == 1)
    //cout << "Styczeń" << endl;
    //else if (m == 2)
    //cout << "Luty" << endl;
    //else if (m == 3)
    //cout << "Marzec" << endl;
    //else if (m == 4)
    //cout << "Kwiecień" << endl;
    
    switch(m) // sprawdz cyz w pudełku m... ma wartość
    {
        case 1:
            cout << "Styczeń";
        break;
        case 2:
            cout << "Luty";
        break;
        case 3:
            cout << "Marzec";
        break;
        case 4:
            cout << "Kwiecień";
        break;
        case 5:
            cout << "Maj";
        break;
        case 6:
            cout << "Czerwiec";
        break;
        case 7:
            cout << "Lipiec";
        break;
        case 8:
            cout << "Sierpień";
        break;
        case 9:
            cout << "Wrzesień";
        break;
        case 10:
            cout << "Październik";
        break;
        case 11:
            cout << "Listopad";
        break;
        case 12:
            cout << "Grudzień";
        break;
    }
    
	return 0;
}

