#include<stdio.h>
#include<conio.h>
main()
{
	char r;
	float alt, media=0; 
	int i;
	
	do{
		printf("Idade: ");
		scanf("%d", &i);
		
		printf("Altura: ");
		scanf("%f", &alt);
		
		printf("Deseja informar mais dados? \n");
		scanf("%c", &r);
	}
	while(r!='NAO');
}
