#include<stdio.h>
#include<conio.h>
main()
{
	float vt;
	int np;
	
	do{
		printf("\nQual o valor total do veiculo: ");
		scanf("%f", &vt);
		printf("\nEm quantas vezes deseja financiar, 36x ou 48x: \n");
		scanf("%d", &np);
	}
	while(np!=36 || np!=48);
	vt=np/vt;
	printf("\nO numero de parcelas e: %dx%.2f", np, vt);
	getche();
}
