#include<stdio.h>
#include<conio.h>
main()
{
	int x, tipo;
	float valor;
	
	for(x=1; x<=10; x++)
	{
		printf("\nDigite o valor do seu produto: ");
		scanf("%f", &valor);
		printf("\nDigite o Tipo do seu produto:  \n1-Ouro \n2-Prata \n3-Bronze \n4-Papel \n");
		scanf("%d", &tipo);
		
		if(tipo=1)
		{
			valor= valor-(valor*30/100);
			printf("O desconto e de 30%, totalizando o valor de: %.2f", valor);
		}
		else if(tipo=2)
		{
			valor=valor-(valor*25/100);
			printf("O desconto e de %, totalizando o valor de: %.2f", valor);
		}
		else if(tipo=3)
		{
			valor=valor-(valor*20/100);
			printf("O desconto e de 20%, totalizando o valor de: %.2f", valor);
		}
		else if(tipo=4)
		{
			valor=-valor-(valor*15/100);
			printf("O desconto e de 15%, totalizando o valor de: %.2f", valor);
		}
	}
	getche();
}
