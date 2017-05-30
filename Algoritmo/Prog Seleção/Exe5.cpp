#include<stdio.h>
#include<conio.h>
main( )
{
	int n1, n2, r;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	r= n1+n2;
	
	if (r > 20)
	{
		r= r+8;
		printf("A soma dos seus numeros foi maior que 20 portanto, o resultado agora e: %d");
	}
	
	else
	{
		r= r-5;
		printf("A soma dos seus numeros foi menor que 20 portanto, o resultado agora e: %d");
	}
}
