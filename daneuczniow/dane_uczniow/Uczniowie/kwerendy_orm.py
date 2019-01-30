#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
import os
from uczniowie_model import *

def kw08():
    """ lista nazwisk uczniĂłw i nazw klas """
    query = (Uczen
        .select(Uczen.nazwisko, Uczen.klasa.klasa)
        .join(Klasa)
    )

    for obj in query:
        print(obj.nazwisko, obj.klasa.klasa)
        
def kw09():
    """ lista nazwisk klas i ilosc uczniow"""
    query = (Uczen
        .select(fn.COUNT(Uczen.id).alias('ilu'), Uczen.klasa.klasa)
        .join(Klasa)
        .group_by(Klasa)
        .order_by(SQL('ilu').desc())
    )

    for obj in query:
        print(obj.klasa.klasa, obj.ilu)
        
def kw10():
    """ lista przedmiotow i ilosc ocen"""
    query = (Ocena
        .select(fn.COUNT(Ocena.id).alias('ile'), Ocena.przedmiot.przedmiot)
        .join(Przedmiot)
        .group_by(Przedmiot)
        .order_by(SQL('ile').asc())
    )
    
def kw11():
    """ po ile ocen maja uczniowie """
    query = (Ocena
        .select(Ocena.uczen.nazwisko, fn.Count(Ocena.id).alias('ile'))
        .join(Uczen)
        .group_by(Ocena.uczen.nazwisko)
        .order_by(SQL('ile').asc())
    )

    for obj in query:
        print(obj.uczen.nazwisko, obj.ile)

def kw12():
    """ srednie ocen"""
    query = (Ocena
        .select(Ocena.uczen.nazwisko, fn.avg(Ocena.id).alias('srednia'))
        .join(Uczen)
        .group_by(Ocena.uczen.nazwisko)
        .order_by(SQL('srednia').asc())
    )

    for obj in query:
        print(obj.uczen.nazwisko, round(obj.srednia, 2))
        
def kw13():
    """ srednie ocen ucznia Szymczak z poszczegolnoch przedmiotow"""
    query = (Ocena
        .select(Ocena.uczen.nazwisko, Ocena.przedmiot.przedmiot, fn.AVG(Ocena.id).alias('srednia'))
        .join(Uczen)
        .join_from(Ocena, Przedmiot)
        .where(Ocena.uczen.nazwisko=='Szymczak')
        .group_by(Ocena.przedmiot.przedmiot)
        .order_by(SQL('srednia').asc())
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.przedmiot.przedmiot, round(obj.srednia, 2))

def kw14():
    """ilu uczniĂłw ma ĹredniÄ powyĹźej 3.5 z WF?"""
    query = (Ocena
        .select(Ocena.uczen.nazwisko, fn.AVG(Ocena.ocena).alias('srednia'))
        .join(Uczen)
        .join_from(Ocena, Przedmiot)
        .where(Ocena.przedmiot.przedmiot == 'WF')
        .group_by(Ocena.uczen.nazwisko)
    )
    query = [obj for obj in query if obj.srednia > 3.5]
    for obj in query:
        print(obj.uczen.nazwisko, round(obj.srednia, 2))
    print('Liczba uczniĂłw:', len(query))
        

def main(args):
    baza.connect()  # poĹÄczenie z bazÄ

    kwerendy = [
        "Uczen.select()",
        "Uczen.select().where(Uczen.imie=='RafaĹ')",
        "Uczen.select().where(Uczen.imie.startswith('G'))",
        "Uczen.select().where(Uczen.egz_mat.between(20, 40))",
        "Uczen.select().where((Uczen.nazwisko=='Piasecki') & (Uczen.imie=='RafaĹ'))",
        "Uczen.select().order_by(Uczen.egz_mat.asc())",
        "Uczen.select().where(Uczen.plec==1).order_by(Uczen.egz_mat.asc())",
    ]
    
    #for obj in eval(kwerendy[6]):
    #    print(obj.nazwisko, obj.imie, obj.egz_mat)
    kw14()
    
    baza.commit()
    baza.close()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
