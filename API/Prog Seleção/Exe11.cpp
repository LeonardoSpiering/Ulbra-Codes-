#include<stdio.h>
#include<conio.h>
main( )
{
	char time1[30], time2[30];
	int gols1, gols2;
	
	printf("Digite o nome de um dos times: ");
	scanf("%s", &time1);
	printf("\nDigite o nome do outro time: ");
	scanf("%s", &time2);
	printf("\nQuantos gols o %s fez: ", time1);
	scanf("%d", &gols1);
	printf("\nQuantos gols o %s fez: ", time2);
	scanf("%d", &gols2);
	
	if (gols1 > gols2)
	{
		printf("\nO vencedor desta partida foi: %s", time1);
	}
	else if (gols2 > gols1)
	{
		printf("\nO vencedor desta partida foi: %s", time2);
	}
	else if (gols1 == gols2)
	{
		printf("\nEste jogo empatou");
	} 
	getche( );
}
