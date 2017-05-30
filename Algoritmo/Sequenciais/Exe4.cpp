#include<stdio.h>
#include<conio.h>
main( )
{
	int A, B, X;
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	
	X= A+B;
	printf("\nO resultado da adição e: %d", X);
	X= A-B;
	printf("\nO resultado da subtração e: %d", X);
	X= A/B;
	printf("\nO resultado da divisao e: %.2d", X);
	X= A*B;
	printf("\nO resultado da multiplicacao e: %d", X);
	getche( );
}
