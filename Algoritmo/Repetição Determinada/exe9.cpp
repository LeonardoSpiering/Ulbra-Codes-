#include<stdio.h>
#include<conio.h>
main()
{
	int x, n, cont=0;
	
	for(x=1; x<=10; x++)
	{
		printf("Digite um valor: ");
		scanf("%d", &n);
	if(n<0)
		cont++;
	}
	printf("A quantidade de numeros negativos sao: %d", cont);
	getche();
}

