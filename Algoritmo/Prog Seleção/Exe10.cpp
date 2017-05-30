#include<stdio.h>
#include<conio.h>
main( )
{
	int n_maca;
	float custo;
	
	printf("\nQuantas macas foram compradas: ");
	scanf("%d", &n_maca);
	
	if (n_maca < 12)
	{
		custo= n_maca*1.30;
		printf("O total da compra sera: %.2f", custo);
	}
	else 
	{
		custo= n_maca*1.00;
		printf("O total da compra sera: %.2f", custo);
	}
	getche( );
}
