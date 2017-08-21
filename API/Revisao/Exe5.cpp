#include<stdio.h>
#include<conio.h>
main( )
{
	float s_fixo, v_total, s_total;
	
	printf("Digite o seu salario fixo: ");
	scanf("%f", &s_fixo);
	printf("\nDigite o valor total das suas vendas deste mes: ");
	scanf("%f", &v_total);
	
	if (v_total >= 15000)
	{
		s_total= (v_total/100*25)+s_fixo;
		printf("Como voce vendeu bastante este mes, seu salario sera: %.2f", s_total);
	}
	else if(v_total >= 5000 && v_total < 15000)
	{
		s_total= (v_total/100*18)+s_fixo;
		printf("Voce vendeu uma quantia consideravel sendo assim seu salario sera: %.2f", s_total);
	}
	else if (v_total < 5000)
	{
		s_total= (v_total/100*7)+s_fixo;
		printf("Voce nao foi tao bom com as vendas, seu salario sera: %.2f", s_total);
	}
	getche( );
}
