#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
		printf("\nDigite o numero: ");
		scanf("%d", &n);

	while(n!=0){
		n--;
		printf("\n%d", n);
	}
}
