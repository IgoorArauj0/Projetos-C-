# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int corinthians;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&corinthians);
	printf("Você digitou o número %d\n\n",corinthians);
	printf("Verificando se é par ou ímpar, aguarde...\n\n");
	sleep (1); // UM INTERVALO PARA DAR A RESPOSTA
	
	if (corinthians % 2 == 0){  // Se o resto da divisão é igual a 0
		printf("O número é par!\n\n");
	}
	else { // SE NÃO
		printf("O número é ímpar!\n\n");
	}
	
	system("PAUSE");
	return 0;
}
