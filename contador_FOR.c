#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int contador;
	printf("\nTabuada do número 2:");
	for(contador = 0 ; contador <= 10; contador++)
	{
		printf("\n 2 x %d = %d",contador,contador*2);
		Sleep(1000);
	}
}
