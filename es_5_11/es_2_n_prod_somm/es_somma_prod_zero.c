#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,prod,somma;
	printf("Questo programma calcola il prodotto e la somma di due numeri inseriti fino a quando uno di essi sia zero. \n\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	somma=n1+n2;
	prod=n1*n2;
	printf("La somma e': %d \n",somma);
	printf("Il prodotto e': %d \n",prod);
	while(n1!=0 ||n2!=0){
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	somma=n1+n2;
	prod=n1*n2;
	printf("La somma e': %d \n",somma);
	printf("Il prodotto e': %d \n",prod);	
	}
	return 0;
}
