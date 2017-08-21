#include <stdio.h>
#include <conio.h>
main(){
	
	int  Nvendas=0,resp, x;
	float Tvendas=0, preco, Mvenda=0, Mediavendas; 
	
	for(x=0; x<200; x++)
	{
		printf("\nDigite o valor da venda: ");
		scanf("%f", &preco);
		
		Nvendas++;
		Tvendas=Tvendas+preco;
		
		if(preco>Mvenda)
		{
			Mvenda=preco;
		}
		
		Mediavendas=Tvendas/Nvendas;
		
		printf("\nDeseja continuar? 1-Sim | 2-Nao \n");
		scanf("%d", &resp);
		
		if(resp==2)
			break;
	}
	
	printf("\nTotal de vendas feitas: %d \n", Nvendas);
	printf("\nValor total das vendas: %.2f\n", Tvendas);
	printf("\nValor medio das vendas: %.2f\n", Mediavendas);
	printf("\nMaior venda: %.2f\n", Mvenda);
	
	getche();
}
