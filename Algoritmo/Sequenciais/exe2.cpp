#include<stdio.h>
#include<conio.h>
main( )
{
	int c_p1, c_p2, q_1, q_2;
	float v_p1, v_p2, total;
	printf("\nDgite o codigo do primeiro produto: ");
	scanf("%d", &c_p1);
	printf("\nO valor do primeiro produto: ");
	scanf("%f", &v_p1);
	printf("\nDigite a quantidade do primeiro produto vendido: ");
	scanf("%d", &q_1);
	printf("\nDigite o codigo do segundo produto: ");
	scanf("%d", &c_p2);
	printf("\nO valor do segundo produto: ");
	scanf("%f", &v_p2);
	printf("\nDigite a quantidade do segundo produto: ");
	scanf("%d", &q_2);
	
	total= (v_p1*q_1)+(v_p2*q_2);
	printf("\nO total a ser pago sera de: %.2f", total);
	getche( );
}
