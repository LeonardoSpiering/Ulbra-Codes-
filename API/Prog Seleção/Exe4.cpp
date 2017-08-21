#include<stdio.h>
#include<conio.h>
main( )
{
	int n1, n2, n3, r;
	
	printf("Digite o numero desejado: ");
	scanf("%d", &n1);
	printf("\nDigite outro numero desejado: ");
	scanf("%d", &n2);
	printf("\nDigite o ultimo numero: ");
	scanf("%d", &n3);
	
	r= n1+n2+n3;
	
	if (r >= 50)
	{
		printf("A soma de seus numeros e maior que 50, Congratulations");
	}
	
	else
	{
		printf("Infelismente seu numero nao e maior que 50");
	}
	getche( );
}
