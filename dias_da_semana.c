#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	printf("Digite o dia da semana entre 1-7: ");
	scanf("%d",&dia);
	switch (dia){
		case 1:
			printf("\nDomingo \n");
			break;
		case 2:
			printf("\nSegunda-Feira \n");
			break;
		case 3:
			printf("\nTerça-Feira \n");
			break;
		case 4:
			printf("\nQuarta-Feira \n");
			break;
		case 5:
			printf("\nQuinta-Feira \n");
			break;				
		case 6:
			printf("\nSexta-Feira \n");
			break;
		case 7:
			printf("\nSábado \n");
			break;	
		default:
			printf("\nDia inválido \n");	
	}

	return 0;
}
