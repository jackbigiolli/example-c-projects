#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b,e,N;
	printf("Questo programma dati in input base ed esponente, calcola la potenza ottenuta. \n\n");
	printf("Inserire la base:\n");
	scanf("%d", &b);
	printf("Inserire l'esponente:\n");
	scanf("%d", &e);
	N=1;
	while(e>0){
	N=N*b;
	e--;
	}	
	printf("Il valore ottenuto e':%d",N);
	return 0;
}
