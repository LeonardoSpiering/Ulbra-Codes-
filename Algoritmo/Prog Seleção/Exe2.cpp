#include<stdio.h>
#include<conio.h>
main( )
{
	int funcao;
	float salario, r_salario;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
    
	printf("\nDigite o codigo da sua funcao: \n1 Tecnico \n2 Gerente \n3 Outro cargo");
    scanf("%d", &funcao);
	
	if (funcao== 1)
	{
		r_salario= (salario*50/100)+ salario;
		printf("\nTecnico seu salario sera: %.2f", r_salario);
    }
	else if (funcao== 2)
	{	
		r_salario= (salario*30/100)+ salario;
		printf("\nGerente, seu salario sera: %.2f", r_salario);
	}
	else if (funcao== 3)
	{
		r_salario= (salario*20/100)+ salario;
		printf("\nSeu salario sera: %.2f", r_salario);
	}	
	getche( );
}
