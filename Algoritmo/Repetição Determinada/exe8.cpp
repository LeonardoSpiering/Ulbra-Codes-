#include<stdio.h>
#include<conio.h>
main()
{
	int i, x = 0;
	
	printf("\nDigite um numero: ");
	scanf("%d", &i);
	
	for(x = 0; x <= 10; x++)
	{
		printf("%d X %d = %d", i, x, i*x);
	}
	getche();
}
