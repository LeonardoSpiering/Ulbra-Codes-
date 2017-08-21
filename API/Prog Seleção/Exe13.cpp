#include<stdio.h>
#include<conio.h>
main( )
{
	int q_estoque, q_maxima, q_minima, q_media;
	
	printf("Digite a quantidade em estoque: ");
	scanf("%d", &q_estoque);
	printf("\nDigite a quantidade maxima do estoque: ");
	scanf("%d", &q_maxima);
	printf("\nDigite a quantidade minima do estoque: ");
	scanf("%d", &q_minima);
	
	q_media= (q_maxima+q_minima)/2;
	
	if (q_estoque >= q_media)
	{
		printf("\nNao efetuar a compra!");
	}
	else
	{
		printf("\nEfetuar compra!");
	}
	getche( );
}
