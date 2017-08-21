#include<stdio.h>
#include<conio.h>
main()
{
	int n, n1;

	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
	}
	while(n<0);
	do{
		printf("Digite um valor: ");
		scanf("%d", &n1);
	}
	while(n1<n);
	n=n/n1;
	printf("%d", n);
}
