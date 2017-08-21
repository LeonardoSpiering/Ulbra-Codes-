#include<stdio.h>
#include<conio.h>
main( )
{
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	if(n >= 100 && n <= 1000)
	  printf("\nO numero esta entre na faixa dos numeros 100 e 1000");
	else
	  printf("\nO numero nao esta entre a faixa de 100 e 1000"),
	getche( );    
}
