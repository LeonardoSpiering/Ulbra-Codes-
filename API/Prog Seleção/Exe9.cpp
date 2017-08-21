#include<stdio.h>
#include<conio.h>
main( )
{
	int senha;
	
	printf("Digite a senha de acesso: ");
	scanf("%d", &senha);
	
	if (senha == 1234)
	{
		printf("\nACESSO PERMITIDO");
	}
	else 
	{
		printf("\nACESSO NEGADO");
	}
}
