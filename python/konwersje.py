#!/usr/bin/env python
# -*- coding: utf-8 -*-


def dec2other(liczba10, podstawa):
    """KOnwewrsja liczby dziesiętnej na system o podanej podstawie
    @liczba - liczba dziesiętna do skonwertowania"""
    liczba = []  # pusta lista do zapamiętywania reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # oblicznaie reszty z modulo
        if reszta > 9:  # wykorzystanie kody ASCII
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)  # uwaga
    liczba.reverse()  # sekswencja.reverse
    return "".join(liczba)
    # str.join("łącznik") - łączy znaki za pomocą #łącznika


def zamiana1():
    """Pobranie danych wejściowych"""
    liczba = int(input("Podaj liczbę: "))
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, dec2other(liczba, podstawa), podstawa))


def other2dec(liczba, podstawa):
    """ Zamiana podanej lcizbty na system dziesiętny"""
    # 123(7) = 1 * 7^2 + 2 * 7^1 +3
    liczba10 = 0
    potega = len(liczba) - 1
    for cyfra in liczba:
        if not cyfra.isdigit():  # str.isdigit()- sprawdza czy łańcuch jest
            # cyfrą
            liczba10 += ord(cyfra.upper()) - 55 * (podstawa ** potega)
        else:
            liczba10 += (cyfra) * (podstawa ** potega)
        potega -= 1


def zamiana2():
    """Pobranie danych wejściowych"""
    liczba = input("Podaj liczbę: ")  # ABC
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))

    print("Wynik konwersji: {}(10) = {}({10})".format(
        liczba, podstawa, other2dec(liczba, podstawa), podstawa))


def main(args):
    print("Zmiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16> lub odwrotnie")
    zamiana1()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

#  ord(znak) - kod ASCII znaku
#  chr("kod_ASCII") - zwraca znak o podanym kodzie kodzie
#  int() - konwersja na liczbę całk.
#  str() - konwersja na napis
#  len(sekswencja) - długość sekwencji
#  str.format - formatowane wyjście
