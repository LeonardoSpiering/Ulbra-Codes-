#include<stdio.h>
#include<conio.h>
main( )
{
	int n_funcionario, n_horas;
	float v_hora, salario;
	
	printf("\nDigite o numero do funcionario:");
	scanf("%d", &n_funcionario);
	printf("\nDigite o numeros de horas trabalhadas:");
	scanf("%d", &n_horas);
	printf("\nDigite o valor de cada hora trabalhada:");
	scanf("%f", &v_hora);
	salario= n_horas*v_hora;
	printf("\nO salario do funcionario sera: %.2f", salario);
	getche ( );
}
