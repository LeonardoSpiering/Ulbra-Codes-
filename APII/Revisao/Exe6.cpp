#include<stdio.h>
#include<conio.h>
main()
{
	float altura=0, medAltura=0;
	int  cont=0;
	char resp;
	
	do{
		printf("\nDigite a altura: ");
		scanf("%f", &altura);
		
		medAltura= altura + medAltura;
		cont++; 

		do{
		printf("\nDeseja Continuar? (S para Sim/N para Nao)\n");
		scanf("%s", &resp);
			
			if(resp != 'N' || resp != 'S')
				printf("\nDigite uma letra valida!");
		
		}while(resp != 'N' || resp != 'S');
		
	}while(resp != 'N');
		
		medAltura = medAltura/cont;
		
		printf("A media das alturas foi: %f", medAltura);
		
	getche();
}
