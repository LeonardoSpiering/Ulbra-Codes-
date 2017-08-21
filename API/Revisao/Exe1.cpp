#include<stdio.h>
#include<conio.h>
main( )
{
	int n_pagos;
	float v_prest, r_pagar;
	
	printf("Digite o valor da prestacao: ");
	scanf("%f", &v_prest);
	printf("\nDigite o numero que prestacao que ja foram pagas: ");
	scanf("%d", &n_pagos);
	
	r_pagar= (30-n_pagos)*v_prest;
	
	printf("\nFaltam ainda um total de: %.2f", r_pagar);
	getche( );
}
