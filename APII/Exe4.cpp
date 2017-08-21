#include <stdio.h>
#include <conio.h>
main()
{
	float n1, n2, n3, media;
	int  x;
	
	for(x=1;x<=10;x++)
	{
		printf("Aluno %d, digite sua primeira nota: ", x);
		scanf("%f", &n1);
		
		printf("\nA sua segunda nota: ");
		scanf("%f", &n2);
		
		printf("\nA sua terceira e ultima nota: ");
		scanf("%f", &n3);
		
		media=(n1+n2+n3)/3;
		
		if (media>=7)
			printf("\nAPROVADO, sua nota foi: %.2f", media);
		else
			printf("\nREPROVADO, sua nota foi: %.2f", media);
	}
	getche();
}
