#include<stdio.h>
#include<conio.h>
main( )
{
	char nome[30];
	int idade;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	if (idade>=5 &&  idade<=10)
	{
		printf("\n%s voce e da categoria Infantil", nome);
	}
	else if (idade>=11 && idade <= 17)
	{
		printf("\n%s voce e da categoria Juvenil", nome);
	}
	else if(idade >= 18)
	{
		printf("\%s voce e da categoria Adulta", nome);
	}
	getche( );
}
