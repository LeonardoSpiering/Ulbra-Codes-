#include<stdio.h>
#include<conio.h>
main( )
{
	int n1, n2, resul;
	printf("\nPrimeiro numero: ");
	scanf("%d", &n1);
	printf("\nSegundo numero: ");
	scanf("%d", &n2);
	
	resul= n2/n1;
	printf("\nResultado: %d", resul);
	getche( );
}
