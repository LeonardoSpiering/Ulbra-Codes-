#include<stdio.h>
#include<conio.h>
main()
{
	int x, i, i2=0, q;
	float n2=0, n;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &q);

	for(x=1; x<=q; x++)
	{
		printf("\nDigite a idade do aluno: ");
		scanf("%d", &i);
		printf("\nDigite a nota do aluno: ");
		scanf("%f", &n);
			if(i>i2)
			{
				i2 = i;
				n2 = n;
			}
	}
	printf("A idade do aluno mais velho e: %d e sua nota e: %.2f", i2, n2);
}
