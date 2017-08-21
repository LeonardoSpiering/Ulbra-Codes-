#include<stdio.h>
#include<conio.h>
main()
{
	char t;
	
		fflush(stdin);
	do{
		printf("\nDigite a tecla: ");
		scanf("%c", &t);
		
		fflush(stdin);
	}
		while(t!='w');
}
