#include<stdio.h>
#include<conio.h>
main()
{
	int n_pessoas, escolha;
	float totaldiaria;
	
		
	do
	{
	printf("Escolha o tipo desejado: \n1-Suite = R$ 180,00 diária \n2-Quarto de luxo = R$150,00 diaria \n3-Quarto conjugado = R$130,00 diaria \n4-Quarto Standart = R$100,00 diaria\n");
	scanf("%d", &escolha);
	
	if(escolha > 4 || escolha < 1)
	
		printf("Tipo de quarto Invalido");
			
	}while(escolha != 1 || escolha != 2 || escolha != 3 || escolha != 4);
	
	printf("Numero de pessoas: ");
	scanf("%d", &n_pessoas);
	
	if( escolha == 1)
	
	totaldiaria= n_pessoas*180;
	printf("O valor da diaria sera de: ");
	
	
	if( escolha == 2)
	
	totaldiaria= n_pessoas*150;
	printf("O valor da diaria sera de: ");
	
	if( escolha == 3)
	
	totaldiaria= n_pessoas*130;
	printf("O valor da diaria sera de: ");
	
	if( escolha == 4)
	
	totaldiaria= n_pessoas*100;
	printf("O valor da diaria sera de: %.2f", totaldiaria);
}
