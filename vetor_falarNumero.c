#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numeros [4];

	printf("\nDigite o valor para o �ndice 1: ");
	scanf("%d",&numeros[0]);
	printf("\nDigite o valor para o �ndice 2: ");
	scanf("%d",&numeros[1]);
	printf("\nDigite o valor para o �ndice 3: ");
	scanf("%d",&numeros[2]);
	printf("\nDigite o valor para o �ndice 4: ");
	scanf("%d",&numeros[3]);
	
	printf("\n1� Posi��o - �ndice 0: %d",numeros[0]);
	printf("\n2� Posi��o - �ndice 1: %d",numeros[1]);
	printf("\n3� Posi��o - �ndice 2: %d",numeros[2]);
	printf("\n4� Posi��o - �ndice 3: %d",numeros[3]);
}
