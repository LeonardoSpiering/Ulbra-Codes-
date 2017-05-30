#include<stdio.h>
#include<conio.h>
main( )
{
	float p_venda, p_custo, lucro;
	printf("\nDigite o valor de venda do produto: ");
	scanf("%f", &p_venda);
	printf("\nDigite o preco de custo do produto: ");
	scanf("%f", &p_custo);
	
	lucro= p_venda-p_custo;
	printf("\nO lucro do vendedor neste produto e de: %.2f", lucro);
	getche( );
}
