#include<stdio.h>
#include<conio.h>
main( )
{
	int n_conta;
	float saldo, debito, credito, s_atual;
	
	printf("Digite o numero da sua conta: ");
	scanf("%d", &n_conta);
	printf("\nDigite seu saldo: ");
	scanf("%f", &saldo);
	printf("\nDigite o debito: ");
	scanf("%f", &debito);
	printf("\nDigite o credito: ");
	scanf("%f", &credito);
	
	s_atual= saldo-debito+credito;
	
	printf("\nSeu saldo atual e de: %.2f", s_atual);
	
	if (s_atual >= 0)
	{
		printf("\nSaldo Positivo");
	}
	else 
	{
		printf("\nSaldo Negativo");
	}
	getche( );
}
