#include<stdio.h>
#include<conio.h>
main( )
{
	int n, r_n;
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	if(n >= 30)
	{
		r_n= n/2;
		printf("Seu numero e maior que 30 portanto, a metade dele e: %d", r_n);
	}
	else
	{
		r_n= n*2;
		printf("Seu numero e menor que 30 portanto, o dobro dele e: %d", r_n);
	}
	getche( );
}
