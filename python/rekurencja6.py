#!/usr/bin/env python
# -*- coding: utf-8 -*-


def euklides_rek(a, b):
    if b == 0:
        return a
    return euklides_rek(b, a % b)


def main(args):
    A = int(input("Liczba A: "))
    B = int(input("Liczba B: "))
    assert euklides_rek(1989, 867) == 51
    assert euklides_rek(10, 5) == 5
    print("NWD({:d}, {:d}) = {:d}".format(A, B, euklides_rek(A, B)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
