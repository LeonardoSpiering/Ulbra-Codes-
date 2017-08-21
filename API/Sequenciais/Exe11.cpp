#include<stdio.h>
#include<conio.h>
main( )
{
	int n1, n2, resto;
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
    resto= n1%n2;
	printf("\nO resto da divisao e: %d", resto);
	getche( );
}
