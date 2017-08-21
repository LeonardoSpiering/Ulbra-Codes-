#include<stdio.h>
#include<conio.h>
main()
{
	int x, d, dm=0;
	float p, mp=1000;
	
	for(x=1; x<=5; x++)
	{
		printf("\nDigite o numero do dia da semana: ");
		scanf("%d", &d);
		printf("\nDigite o peso deste dia: ");
		scanf("%f", &p);
		printf("____________________________");
		
		if(mp>p)
		{
			mp=p;
			dm=d;
		}		
	}
	printf("\nO Menor peso foi: %.2f, ocorreu no dia: %d", mp, dm);
}
