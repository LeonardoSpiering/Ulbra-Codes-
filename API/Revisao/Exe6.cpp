#include<stdio.h>
#include<conio.h>
main( )
{
	int n1, n2, r;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nDigite outro numero:");
	scanf("%d", &n2);
	
	if (n1 > n2)
	{
		r= n1/n2;
    }
		else if(n1<n2)
		{
			r= n2/n1;
		}
	if(r%2==0)
	{
		printf("\n %d \n %d \n resultado= %d e par", n1, n2, r);
    }
		else if(r%2!=0)
		{
			printf("\n %d \n %d \n resultado %d e impar", n1, n2, r);
		}
}
