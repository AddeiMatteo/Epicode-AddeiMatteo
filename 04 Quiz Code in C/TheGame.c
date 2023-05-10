#include <stdio.h>

int main () {

//Scrivo le Variabili

int punteggio = 0;
int risposta;
char scelta;
char nome_giocatore[20];



printf ("\t\tBenvenuto nel Quizzettone Incredibile!!\n");
printf ("\t\t_____________________________________\n");
printf ("\t\t\t La cosa è molto semplice\n");
printf ("\t\t\t devi solo rispondere a 3\n");
printf ("\t\t\t semplicissime domande Coraggio!\n\n\n");

/*
* Inizio immettendo il comando do per cosi poter
* creare un "loop" alla fine del codice
*/

do {

printf ("\t\tSe vuoi giocare digita A\n");
printf ("\t\tSe non vuoi giocare digita B\n");
scanf ("%c", &scelta);

if ( scelta == 'a' || scelta == 'A' )
{
	printf ("Allora Cominciamo\n");
	printf ("\n\n\nDimmi prima il tuo nome:");
	scanf ("%s", &nome_giocatore);

	printf ("Allora %s iniziamo con il nostro incredibile Quiz\n", &nome_giocatore);

// Chiedo Nome, lo salvo come stringa e inizia il quiz

printf ("\tDomanda 1: Quale serie di Videogiochi è famosa per avere come nemici gli zombie?\n");
printf ("1) - Final Fantasay\n");
printf ("2) - Super Smash Bros.\n");
printf ("3) - Resident Evil\n");
printf ("4) - Bayonetta\n");
scanf ("%d", &risposta);

if (risposta == 3 ) {
	printf ("Bravo vedo che te ne intendi di VideoGiochi\n");
	punteggio++;
}
else {
	printf ("Mmmm...non sei avvezzo ai Videogiochi noto.\n");
}


printf ("\tDomanda 2: Chi è stato il più giovane Imperatore della storia tra i seguenti?\n");
printf ("1) - Alessandro Magno\n");
printf ("2) - Giulio Cesare\n");
printf ("3) - Napoleone Bonaparte\n");
printf ("4) - Carlo Azeglio Ciampi\n");
scanf ("%d", &risposta);

if (risposta == 1 ) {
        printf ("In storia sei bravo. Molto Bene!\n");
        punteggio++;
}
else {
        printf ("Mannaggia...dovresti ripassare un po' Storia.\n");
}

 
printf ("\tDomanda 3: Quale è la capitale della Birmania?\n");
printf ("1) - Roma\n");
printf ("2) - Washington D.C.\n");
printf ("3) - Berlino\n");
printf ("4) - Chi min***a la sa la capitale della Birmania!\n");
scanf ("%d", &risposta);
 
if (risposta == 4 ) {
        printf ("Hai digitato perchè conoscevi la citazione? Te la do buona solo per quello\n");
        punteggio++;
}
else {
        printf ("No...non ci siamo devi rivedere un po' geografia...\n");
}

//Alla fine del quiz viene dato il punteggio e viene chiesto se si vuole iniziare una nuova partita

printf ("Hai totalizzato %d punti!!\n\n", punteggio);

}
else if (scelta == 'B' || scelta == 'b' ) {
printf ("\n\t\tArrivederci\n");
break;
} else {

while (getchar() != '\n');
}

} while (1);

return 0;

}

//Fine del codice
