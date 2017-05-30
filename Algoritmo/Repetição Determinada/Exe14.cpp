#include<stdio.h>
#include<conio.h>
main()
{
	int n, n2, x, x2;
	
	printf("Digite o numero de vezes que os valores devem ser lidos: ");
	scanf("%d", &n);
	
	for(x=1; x<=n; x++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &n2);
		if(n2>=0)
		{
			printf("\nO numero e positivo");
		}
		else
			printf("\nO numero e negativo");
			if(n2%2==0)
			{
				printf("\nO numero e par");
			}
			else
				printf("\nO numero e impar");

		x2= n2*n2;
		printf("\nO quadrado do numero: %d", x2);
		n2= n2*n2*n2;
		printf("\nO cubo do numero: %d", n2);
		printf("\n______________________________");
	}
	getche();
}
