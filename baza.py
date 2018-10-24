#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza.py
import csv
import sqlite3
import os.path


def czy_jest(plik):
    """F sprawdza czy plik sitnieje na dysku"""
    if not os.path.isfile(plik):
        print("PLik {} nie istnieje!".format(plik))
        return False
    return True
    

def czytaj_dane(plik, separator=","):
    dane = []
    with open(plik, 'r', newline='', encoding='utf-8') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=separator)
        for rekord in tresc:
            dane.append(rekord)
    return dane
    
def ile_kolumn(cur, tab):
    """F. liczy i zwraca liczbe kolumn w podanej tabeli"""
    licznik = 0 
    for kol in cur.execute("PRAGMA table_info('" + tab+"')"):
        licznik+=1
    return licznik

def main(args):
    # Konfiguracja #
    baza = 'uczniowie'
    tabele = ['nazwiska', 'dane_osobowe', 'oceny']
    roz = '.txt'
    naglowki = True # czy pliki zrodlowe zaiweraja naglowki
    con = sqlite3.connect(baza + '.db')
    cur = con.cursor()
    
    if not czy_jest(baza + '.sql'):
        return 0

    with open(baza + '.sql', 'r') as plik:
        cur.executescript(plik.read())
        
    for tab in table:
        ile = ile_kolumn(cur, tab)
        dane = czytaj_dane(tab + roz)

    con.commit()
    con.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

