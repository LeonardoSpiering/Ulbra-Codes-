#include <stdio.h>
#include <conio.h>
main()
{
	
	int n, contNega=0, contPosi=0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n<0)
			contNega++;
		else 
			contPosi+=n;
	}while(n!=0);
	printf("\nQuantidade de numeros negativos: %d \nSoma dos numeros positivos: %d", contNega, contPosi);
getche();
}
