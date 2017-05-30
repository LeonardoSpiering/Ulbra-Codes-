#include<stdio.h>
#include<conio.h>
main( )
{
	float quant, preco, total;
	printf("\nPreco do produto: ");
	scanf("%f", &preco);
	printf("\nQuantidade: ");
	scanf("%f", &quant);
	
	total= quant*preco;
	printf("\nO total a ser pago e de: %.2f", total);
	getche( );
}
