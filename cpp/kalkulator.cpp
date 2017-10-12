/*
 * kalkulator.cpp 
 */




using namespace std;

int main(int argc, char **argv)
{
    char znak; // +, -, *, /
    
    cout << "Podaj znak działania: ";
    cin >> znak;
    int a, b;
    cout <<b;
      
    if (znak == '+')    
    { 
        cout << "Suma: " << a + b << endl;
    }
    else if (znak == '-')    
    { 
        cout << "Różnica: " << a - b << endl;
    }
    else if (znak == '*')    
    { 
        cout << "Iloczyn: " << a * b << endl;
    }
    else if (znak == '/')    
    { 
        cout << "Iloraz: " << a / b << endl;
    }
    
    return 0;
}

