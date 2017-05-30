#include<stdio.h>
#include<conio.h>
main()
{
	int x, i, it=0;
	
	for(x=1; x<=8; x++)
	{
		printf("\nDigite a sua idade: ");
		scanf("%d", &i);
		it= i+it;
	}
		it= it/8;
		printf("A media das idades e: %d", it);
	getche();
}
