#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v=7,m=0,n;
	printf("Questo programma dati 7 numeri, calcola il numero di multipli di 5 inseriti. \n\n");
	
	while(v>0){
		printf("Inserire numero: \n");
		scanf("%d",&n);
		v--;
		if(n%5==0){
			m++;
		}	
	}
	printf("I multipli di 5 inseriti sono: %d",m);
	return 0;
}
