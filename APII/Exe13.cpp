#include <stdio.h>
#include <conio.h>
main(){
	
	int N, x, SomaImpares;
	
	for(x=0; x<100; x++)
	{
		printf("Digite um numero: \n");
		scanf("%d", &N);
		
		if(N == 0)
			break;
		
		if(N < 0)
			SomaImpares+=N;
	}
	
	printf("\nSoma dos valores impares: %d", SomaImpares);
	getche();
}		
