#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	double salario;
	char continua = 's';
		
	while(continua == 's' || continua == 'S'){
	system("cls");
	printf("Digite seu salário: ");
	scanf("%lf",&salario);
	
	if(salario <= 1903.98){
		printf("Isento de imposto \n");
	}
		else 
			if(salario > 1903.98 && salario <= 2826.65){
			printf("Sua taxa é de 7.5%% \n");
		}
		else 
			if(salario > 2826.65 && salario <= 3751.05){
			printf("Sua taxa é de 15%% \n");
		}
		else 
			if(salario > 3751.05 && salario <= 4664.68){
			printf("Sua taxa é de 22.5%% \n");
		}
		else
		{
		printf("Sua taxa é de 27.5%% \n");
		}
		
	printf("Deseja continuar (s/n)?");
	fflush(stdin);
	scanf("%c",&continua);
	}
}
