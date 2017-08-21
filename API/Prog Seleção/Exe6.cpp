#include<stdio.h>
#include<conio.h>
main( )
{
	char nome[30];
	int sexo, idade;
	
	printf("\nDigite seu nome: ");
	scanf("%s", &nome);
	printf("\nEscolha 1 para Masculino e 2 para Feminino: \n1 M \n2 F");
	scanf("%d", &sexo);
	printf("\nIdade: ");
	scanf("%d", &idade);
	
	if (sexo== 2 && idade < 25)
	{
		printf("%s ACEITA", nome);
	}
	else 
	{
		printf("%s NAO ACEITA", nome);
	}
	getche( );
}
