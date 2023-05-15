from moduli import *

str1 = """	Benvenuto
	Qui puoi calcolare l'area della forma geometrica che preferisci.
	Digita
	>>>A Quadrato
	>>>B Rettangolo
	>>>C Triangolo"""

print (str1)

scelta = input()

if scelta == 'A' or scelta == 'a':

        quadrato()

elif scelta == 'B' or scelta == 'b':

        rettangolo()

elif scelta == 'C' or scelta == 'c':

        triangolo()

else:

        print ("Hai sbagliato a scrivere, riprova")

