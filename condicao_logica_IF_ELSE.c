# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int corinthians;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&corinthians);
	printf("Voc� digitou o n�mero %d\n\n",corinthians);
	printf("Verificando se � par ou �mpar, aguarde...\n\n");
	sleep (1); // UM INTERVALO PARA DAR A RESPOSTA
	
	if (corinthians % 2 == 0){  // Se o resto da divis�o � igual a 0
		printf("O n�mero � par!\n\n");
	}
	else { // SE N�O
		printf("O n�mero � �mpar!\n\n");
	}
	
	system("PAUSE");
	return 0;
}
