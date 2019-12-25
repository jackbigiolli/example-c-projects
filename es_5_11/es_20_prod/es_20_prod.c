#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,c=20,n1,p,n2;
	printf("Questo programma calcola il prodotto di 20 numeri inseriti. \n\n");
	printf("Inserire numero:\n");
	scanf("%d",&n);
	c--;
	printf("Inserire numero:\n");
	scanf("%d",&n1);
	c--;
	p=n1*n;
	while(c>0){
		printf("Inserire numero:\n");
		scanf("%d",&n2);
		c--;
		p=p*n2;
	}
	printf("Il prodotto dei numeri inserti e': %d", p);
	return 0;
}
