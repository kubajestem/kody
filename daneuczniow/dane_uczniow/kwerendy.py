#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py
#  
import sqlite3


def kwerenda1(cur):
    cur.execute("""
        SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    """)
    for row in cur.fetchall():
        print(tuple(row))


def main(args):
       # Konfiguracja #
    baza = 'uczniowie'
    tabele = ['nazwiska', 'dane_osobowe', 'oceny']
    roz = '.txt'
    naglowki = True # czy pliki zrodlowe zaiweraja naglowki
    con = sqlite3.connect(baza + '.db')
    cur = con.cursor()
    
    kwerenda1(cur)
    
    con.commit()
    con.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
