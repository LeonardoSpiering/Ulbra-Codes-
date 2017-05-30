#include<stdio.h>
#include<conio.h>
main( )
{
	int nro_coelhos;
	float custo;
	printf("\nDigite o numero de coelhos: ");
	scanf("%d", &nro_coelhos);
	
	custo= (nro_coelhos*0.70)/18+10;
	printf("\nO custo da criacao de coelhos e: %.2f", custo);
	getche( );
}
