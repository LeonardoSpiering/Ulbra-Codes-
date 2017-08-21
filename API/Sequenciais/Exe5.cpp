#include<stdio.h>
#include<conio.h>
main( )
{
	int A, B, C, M;
	printf("\nDigite o primeiro numero desejado: ");
	scanf("%d", &A);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &B);
	printf("\nDigite o ultimo numero: ");
	scanf("%d", &C);
	
	M= (A+B+C)/3;
	printf("\nA media aritimetica destes numeros e: %.2d");
	getche( );
}
