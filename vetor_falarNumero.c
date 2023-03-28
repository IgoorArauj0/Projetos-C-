#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numeros [4];

	printf("\nDigite o valor para o índice 1: ");
	scanf("%d",&numeros[0]);
	printf("\nDigite o valor para o índice 2: ");
	scanf("%d",&numeros[1]);
	printf("\nDigite o valor para o índice 3: ");
	scanf("%d",&numeros[2]);
	printf("\nDigite o valor para o índice 4: ");
	scanf("%d",&numeros[3]);
	
	printf("\n1ª Posição - índice 0: %d",numeros[0]);
	printf("\n2ª Posição - índice 1: %d",numeros[1]);
	printf("\n3ª Posição - índice 2: %d",numeros[2]);
	printf("\n4ª Posição - índice 3: %d",numeros[3]);
}
