#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int contador;
	int vetor[100];
	
	for(contador=0;contador<100;contador++){
		vetor[contador] = contador+1;
		printf("Vetor: %d\n",vetor[contador]);	
	}
}

