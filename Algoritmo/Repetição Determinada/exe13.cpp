#include<stdio.h>
#include<conio.h>
main()
{
	float alt, altm=0;
	int c, cm=0, x;
	
	for(x=1; x<=3; x++)
	{
		printf("\nDigite seu codigo: ");
		scanf("%d", &c);
		printf("\nDigite sua altura: ");
		scanf("%f", &alt);
		printf("------------------------");
		
		if(alt>altm)
		{
		cm= c;
		altm = alt;
		}
	}
		printf("\nCodigo do aluno mais alto: %d, sua altura: %.2f", cm, altm);
	getche();
}
