from moduli import *

print ("Benvenuto, qui puoi calcolare l'area di diverse forme geometriche.")
print ("Scegli quella che preferisci:")

while True:
#Ho messo while per creare un loop e poter tornare alla selezione iniziale alla fine di ogni operazione
	print (">>>A - Quadrato")
	print (">>>B - Rettangolo")
	print (">>>C - Triangolo")
	print (">>>Z - Per Uscire")

#Ho creato una scelta più pulita facendo le operazioni su un modulo a parte e poi importandole

	scelta = input()

	if scelta == 'A' or scelta == 'a':

		quadrato()

	elif scelta == 'B' or scelta == 'b':

		rettangolo()

	elif scelta == 'C' or scelta == 'c':

		triangolo()

#Ho inserito una scelta per poter uscire dal programma e quindi dal loop

	elif scelta == 'Z' or scelta == 'z':
		print ("Arrivederci!")
		break

#Se si inserisce qualsiasi altro carattere o numero che non siano i precedenti il programma
#Dà errore e fa ripetere la scelta

	else:

		print ("Hai sbagliato a scrivere, riprova")
		continue
