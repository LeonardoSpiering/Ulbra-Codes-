#include<stdio.h>
#include<conio.h>
main()
{
	int n, qd=0;
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	do{
		n=n/2;
		qd++;
	}
	while(n>!1);
	
	printf("Ultima divis�o: %d, Quantidade de divis�es efetuadas: %d", n, qd);
}
