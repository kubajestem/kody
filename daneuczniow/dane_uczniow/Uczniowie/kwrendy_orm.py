#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  klasa_uczen.py
import os
from uczniowie_model import *

def main(args):
    baza.connect()  # poĹÄczenie z bazÄ
    
    kwerendy = [
        "Uczen.select()",
        "Uczen.select().where(Uczen.imie=='Rafał')"
    ]
    
    for obj in eval(kwerendy[0])
        print(obj.nazwisko)

    baza.commit()
    baza.close()

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
