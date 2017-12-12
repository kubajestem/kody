#!/usr/bin/env python
# -*- coding: utf-8 -*-
# n! = 1 dla {0, 1}
# n! = 1 * 2 * n dla N+ - {0,1}
# n! = (n-1)! * n


def silnia_rek(n):
    if n < 2:
        return 1
    return silnia_rek(n - 1) * n


def silnia_it(n):
    """Funkcja oblicza iteracyjne potęgę l. naturalnej"""
    wynik = 1
    for i in range(2, n + 1):
        wynik = wynik * i
    return wynik


def main(args):
    # pobierz od uzytkownika podstawe i wykładnik
    # i przypisz do odpwoeidznich zmiennyvh

    a = int(input("Podaj liczbę: "))
    assert type(a) == int

    assert silnia_it(0) == 1
    assert silnia_it(1) == 1
    assert silnia_it(7) == 5040
    assert silnia_rek(7) == 5040
    print("Silnia:", silnia_rek(a))

    #print("Potęga: ", potega_it(a, n))

    return 0



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
