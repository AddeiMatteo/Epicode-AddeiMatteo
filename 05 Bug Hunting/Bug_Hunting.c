#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu ();
	scanf ("%c", &scelta);

	switch (scelta)
	{
		case 'A': case 'a': //Messo un case aggiuntivo per la lettera minuscola
		moltiplica();
		getchar(); //Ho messo getchar ad ogni case tranne 'E' per leggere un singolo carattere da tastiera ed evitare che si creassero dei loop con errori
		main();
		break;
		case 'B': case 'b': //Uguale ad A
                dividi();
		getchar();
		main();
                break;
		case 'C': case 'c': //Uguale ad A
                ins_string();
		getchar();
		main();
                break;
		case 'E': case 'e': //Messo un case per permettermi di uscire dal programma
		printf ("Arrivederci\n\n\n");
		return 0;
		default: //Ho aggiunto un default per riportare il programma al menù iniziale
		getchar();
		printf ("Carattere non riconosciuto, per favore Riprova\n\n\n"); //Messaggio di Errore
		main();
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nE >> Uscire dal Programma\n");

}


void moltiplica ()
{
	int  a, b = 0;
	int prodotto; //Non era necessario mettere questa variante qui ma è più ordinato
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	scanf ("%d", &b);
		//Potevo lasciare short int come nell'esercizio originale ma avrei dovuto cambiare tutti i %d in %hd
	prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d\n\n\n", a, b, prodotto);
}


void dividi ()
{
        int  a, b = 0;
	float divisione; //Ho messo la variante come float per inserire possibili numeri dopo la virgola
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denominatore:");
        scanf ("%d", &b);

        divisione = a / b; //cambiato % in / per permettere la divisione

        printf ("La divisione tra %d e %d e': %f\n\n\n", a, b, divisione);
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
	printf ("Ciao %s\n\n\n", &stringa); //Messaggio aggiuntivo alla compilazione della stringa
}
