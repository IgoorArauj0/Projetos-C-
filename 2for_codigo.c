#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a, b;
	
	for(a = 1; a <= 10; a++)
	{
		printf("\nVolta Externa: %d\n",a);
		for(b = 1; b <= 10; b++)
		{
			printf("%d ",b);
			Sleep(500);
		}
	}
}
