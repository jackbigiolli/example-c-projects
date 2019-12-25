#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,c=0;
	printf("Questo programma calcola per sottrazioni successive, il quoziente e il resto tra due numeri. \n\n");
	printf("Inserire primo numero:\n");
	scanf("%d",&n1);
	printf("Inserire secondo numero:\n");
	scanf("%d",&n2);
	if(n1>n2){
		while(n1>n2){
		n1=n1-n2;
		c++;
		}
	}else{
		printf("Inserire un secondo valore in modo che sia minore del primo: \n");
		scanf("%d",&n2);
			while(n1>n2){
				n1=n1-n2;
				c++;
			}
	}
	printf("Il risultato e': %d\n",c);
	printf("Il resto e':%d\n",n1);
	return 0;
}
