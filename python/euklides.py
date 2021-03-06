#!/usr/bin/env python
# -*- coding: utf-8 -*-


def euklides(a, b):
    while a != b:
        if a > b:
            a == a - b
        else:
            b == b - a
    return a


def euklides2(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def euklides_rek(a, b):
    if b == 0:
        return a
    return euklides_rek(b, a % b)


def main(args):
    a = int(input("Liczba: "))
    b = int(input("Liczba: "))
    assert euklides2(1989, 867) == 51
    assert euklides2(10, 5) == 5
    print("NWD({:d}, {:d}) = {:d}".format(a, b, euklides_rek(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
