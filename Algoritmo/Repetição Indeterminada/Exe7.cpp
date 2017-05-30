#include<stdio.h>
#include<conio.h>
main()
{
	int n=0, x=0;
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	do{
	x=x+n;
	n=n-1;
	}
	while(n>=0);
	printf("%d", x);
	getche();
}
