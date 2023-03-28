#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char opcao;
	double resultado,num1,num2;
		
	printf("***************************\n");
	printf("  Calculadora S�mples\n");
	printf("***************************\n");
	printf("Escolha:\n");
	printf("A - Adi��o\n");
	printf("S - Subtra��o\n");
	printf("M - Multiplica��o\n");
	printf("D - Divis�o\n");
	printf("***************************\n");
	printf("Digite uma op��o: ");
	scanf("%c",&opcao);
	printf("Digite o primeiro n�mero: ");
	scanf("%lf",&num1);
	printf("Digite o segundo n�mero: ");
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
			printf("Resultado da subtra��o: %.2lf\n\n",resultado);
			break;
		case 'M':
		case 'm':	
			resultado = num1*num2;
			printf("Resultado da multiplica��o: %.2lf\n\n",resultado);
			break;
		case 'D':
		case 'd':
			resultado = num1/num2;
			printf("Resultado da divis�o: %.2lf\n\n",resultado);
			break;
		default:
			printf("Op��o inv�lida!\n\n");
		}
	printf("***************************\n");
	system("pause");
	return 0;

}
	
