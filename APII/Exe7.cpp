#include<stdio.h>
#include<conio.h>
main()
{
	int N1, N2, resp;
	float soma, subtrair, multiplicar, dividir;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &N1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &N2);
	
	do
	{
	printf("Voce Deseja: 1-Somar \n2-Subtrair \n 3-Multiplicar\n4-Dividir");
	scanf("%d", &resp);
	}while(resp != 1 || resp != 2 || resp != 3 || resp != 4 );
	
	if(resp == 1)
		{
		soma= N1+N2;
		printf("A soma dos numeros: %.2f", soma);
		}
	
	if(resp == 2)
	{
		subtrair= N1 - N2;
		printf("A subtracao dos numeros: %.2f", subtrair);
	}
	
	if(resp == 3)
	{
		multiplicar = N1*N2;
		printf("A multiplicacao dos numeros: %.2f", multiplicar);
	}
	
	if(resp == 4)
	{
		dividir = N1/N2;
		printf("A divisao dos numeros: %.2f", dividir);
	}
	getche();
}
