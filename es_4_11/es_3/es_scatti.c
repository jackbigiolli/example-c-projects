#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n_s,costo,n;
	printf("Questo programma serve per calcolare il costo degli scatti telefonici inseriti.\n\n");
	printf("Inserire il numero di scatti effettuati:\n");
	scanf("%d",&n_s);
	if(n_s<=80){
		costo=7.50;
	}if(n_s>80 && n_s<=140){
		n_s=n_s-80;
		costo=7.50+n_s*0.60;
	}if(n_s>140 && n_s<=200){
		n_s=n_s-140;
		costo=7.50+n_s*0.50;
	}if(n_s>200){
		n_s=n_s-200;
		costo=7.50+n_s*0.40;
	}
	printf("Il costo e':%d", costo);
	return 0;
}
