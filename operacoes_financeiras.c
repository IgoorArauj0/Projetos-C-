#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int quantidade, contador=0;
	double operacoes, total=0, media=0;
	printf("Digite a quantidade de opera��es financeiras realizadas: ");
	scanf("%d",&quantidade);
	while(contador < quantidade){
		contador = contador + 1;
		printf("Digite o valor da %d� opera��o: ",contador);
		scanf("%lf",&operacoes);
		total = total + operacoes;
	}
	media = total/quantidade;
	printf("O total das opera��es � de: R$%.2lf",total);
	printf("\nA m�dia foi: R$%.2lf",media);
}
