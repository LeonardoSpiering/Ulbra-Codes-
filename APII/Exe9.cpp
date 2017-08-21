#include<stdio.h>
#include<conio.h>
main()
{
	int sexo;
	float alt, pesoM=0, pesoF=0;
	
	do
	{
		printf("\nDigite sua altura: ");
		scanf("%f", &alt);
		
		if(alt == 0)
			break;
		
		printf("\nDigite seu sexo: 1- Feminino/2- Masculino \n ");
		scanf("%d", &sexo);	
		
		if(sexo == 1)
		{
			pesoM = (72.7*alt)-58;
			printf("Seu peso ideal e: %.2f", pesoM);
		}
		
		if(sexo == 2)
		{
			pesoF = (62.1*alt)-44.7;
			printf("Seu peso ideal e: %.2f", pesoF);
		}
	}while(alt != 0);
	getche();
}
