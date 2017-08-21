#include<stdio.h>
#include<conio.h>
main()
{
	int x, n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(x=1; x<=n; x++)
	{
		printf("\n%d", x);
	}
	getche();
}
