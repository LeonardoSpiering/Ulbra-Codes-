#include<stdio.h>
#include<conio.h>
main()
{
	float kgmaca, kgmorango, total, pmaca=3, pmorango=5, peso;
	
	printf("Digite a quantidade em Kg de Maca: ");
	scanf("%f", &kgmaca);
	
	printf("Digite a quantidade em Kg de Morango: ");
	scanf("%f", &kgmorango);
	
	
	if (kgmaca >= 5)

	pmaca = 2.00;
	
	if (kgmorango >= 5)
	
		pmorango = 4.00;
	
	 
	total= (kgmorango*pmorango)+(kgmaca*pmaca);
	
	peso = kgmorango + kgmaca;
	
	
	if(peso > 8 || total > 35)
	{
		total = total - (total/100*20);
	}
	
	printf("O valor a ser pago e de: %.2f", total);
	
	getch();
}		

