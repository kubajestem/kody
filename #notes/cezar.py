#!/usr/bin/env python
# -*- coding: utf-8 -*-
#Lvcb Dvqjta 26/16/3111 Ubsopcsafh


def szyfruj(tekst, klucz):

    szyfrogram = ""
    klucz = klucz % 26
    for znak in tekst:
        ascii = ord(znak) + klucz
        if ord(znak) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97:
            ascii -= 26
        elif ascii > 122:
            ascii -= 26
        szyfrogram += chr(ascii)
    return szyfrogram


def deszyfruj(szyfrogram, klucz):
    tekst = ""
    for znak in szyfrogram:
        ascii = ord(znak) - klucz
        if ord(znak) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97:
            ascii -= 26
        elif ascii > 122:
            ascii -= 26
        tekst += chr(ascii)
    return tekst

# obsłużyć małe i duże litery
# obsłużyć spacje


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Podaj klucz: "))
    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))
    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
