#include<stdio.h>
#include<conio.h>
main()
{
	int x, nc=0;
	float vp, vp2=0;
	
	printf("Quantos carnes ha para pagar: ");
	scanf("%d", &nc);
	
	for(x=1; x<=nc; x++){
		printf("Digite o valor da prestacao a ser paga: ");
		scanf("%f", &vp);
		vp2 = vp+vp2;
	}
	printf("O valor a ser pago e de: %.2f", vp2);
	getche();
}
