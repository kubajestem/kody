

def main(args):
	reszty = []
    liczba = int(input("Podaj liczbe: "))
    podstawa = int(input("Podaj podstawe: "))

    while liczba > 0:
        reszta = liczba % podstawa
        if podstawa > 10 and reszta >= 10:
            reszta = chr(reszta + 55)
            reszty.append(chr(reszta + 55))
        else:
            reszty.append(reszta)
        liczba = liczba // podstawa

    reszty.reverse()
    print(reszty)

   
	return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
