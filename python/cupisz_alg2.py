#!/usr/bin/env python
# -*- coding: utf-8 -*-


def zbadaj_liczbe(a):
    i = 2
    while a == 1:
        i = i + 2
        if i > a:
            print(a, "Nie jest parzyste")
            break
    print(a, "jest parzyste")


def main(args):
        a = 0
        while a <= 0 or a >= 100:
            a = int(input("Podaj liczbe:"))
return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
