#include<stdio.h>
#include<conio.h>
main()
{
	int x, cod=0, cont; 
	float Alt, maiorAlt=0, mediaAltF=0, menorAlt=5000, AltF;
	
	for(x=0; x<10; x++)
	{
	printf("\nDigite o Codigo: (1)Masculino/(2)Feminino");
	scanf("%d", &cod);
	while(cod < 1 || cod > 2)
	{
		printf("Digite um numero valido!");
		printf("\nDigite o Codigo: (1)Masculino/(2)Feminino");
		scanf("%d", &cod);
	}
	
	printf("\nDigite a Altura: ");
	scanf("%f", &Alt);
	
	
	if(Alt > maiorAlt)
		maiorAlt=Alt;
	
	if(Alt<menorAlt)
		menorAlt=Alt;
	
	if(cod == 2)
	{
		cont++;
		AltF= Alt+AltF;
	}
	
	mediaAltF/cont;
	}
	
	printf("\nA maior altura da turma e: %.2f", maiorAlt);
	printf("\nA menor altura da turma e: %.2f", menorAlt);
	printf("\nA media da altura feminina e: %.2f", mediaAltF);

	getche();
}
