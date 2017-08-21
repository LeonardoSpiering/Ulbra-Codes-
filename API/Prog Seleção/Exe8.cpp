#include<stdio.h>
#include<conio.h>
main()
	int tipo;
	float custo, percurso;
	
	printf("\nEscolha o tipo do seu carro: \n1 Tipo A \n2 Tipo B \n3 Tipo C");
	scanf("%d", &tipo);
	printf("\nQuantos quilometros e seu percurso: ");
	scanf("%f", &percurso);
	
	if(tipo == 1)
	{
		custo= (percurso/8);
		printf("\nO custo de litros para este percurso sera de: %f", custo);
	}
	else if(tipo == 2)
	{
		custo= (percurso/9);
		printf("\nO custo de litros para este percurso sera de: %f", custo);
	}
	else if(tipo == 3)
	{
		custo= (percurso/12);
		printf("\nO custo de litros para este percurso sera de %f", custo);
	}
	getche( );
}
