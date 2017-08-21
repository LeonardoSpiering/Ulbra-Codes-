#include<stdio.h>
#include<conio.h>
main( )
{
	float a, b, area;
	printf("\nDigite a altura: ");
	scanf("%f", &a);
	printf("\nDigite a base: ");
	scanf("%f", &b);
	
	area= (a*b)/2;
	printf("\nA area do triangulo e: %.2f", area);
    getche( );
}
