#include<stdio.h>
#include<conio.h>
main()
{
	int s;

	do{
		printf("\n\nDigite a senha: ");
		scanf("%d", &s);
		if(s!=2016)
		{
			printf("\nSENHA INVALIDA");
		}
	}
	while(s!=2016);
	printf("\nACESSO PERMITIDO");
}
