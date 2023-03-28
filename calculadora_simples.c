#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char opcao;
	double resultado,num1,num2;
		
	printf("***************************\n");
	printf("  Calculadora Símples\n");
	printf("***************************\n");
	printf("Escolha:\n");
	printf("A - Adição\n");
	printf("S - Subtração\n");
	printf("M - Multiplicação\n");
	printf("D - Divisão\n");
	printf("***************************\n");
	printf("Digite uma opção: ");
	scanf("%c",&opcao);
	printf("Digite o primeiro número: ");
	scanf("%lf",&num1);
	printf("Digite o segundo número: ");
	scanf("%lf",&num2);
	switch(opcao){
	
		case 'A':
		case 'a':	
			resultado = num1+num2;
			printf("Resultado da soma: %.2lf\n\n",resultado);
			break;
		case 'S':
		case 's':	
			resultado = num1-num2;
			printf("Resultado da subtração: %.2lf\n\n",resultado);
			break;
		case 'M':
		case 'm':	
			resultado = num1*num2;
			printf("Resultado da multiplicação: %.2lf\n\n",resultado);
			break;
		case 'D':
		case 'd':
			resultado = num1/num2;
			printf("Resultado da divisão: %.2lf\n\n",resultado);
			break;
		default:
			printf("Opção inválida!\n\n");
		}
	printf("***************************\n");
	system("pause");
	return 0;

}
	
