#include<stdio.h>
#include<conio.h>
main()
{
	int x, i;
	
	for(x=1; x<=20; x++)
	{
		printf("\nDigite sua idade: ");
		scanf("%d", &i);
		
		if(i>=18 && i<=60)
		{
			printf("\nVoto Obrigatorio!");	
		}	
		else
			printf("\nVoto Nao Obrigatorio!");
	}
	getche();
}
