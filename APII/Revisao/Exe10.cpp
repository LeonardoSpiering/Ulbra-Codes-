#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	float N1, N2, N3, N4, media;
	
	for(x=0; x<10; x++)
	{
		printf("\nDigite a primeira nota: ");
		scanf("%f", &N1);
		
		printf("\nDigite a segunda nota: ");
		scanf("%f", &N2);
		
		printf("\nDigite a terceira nota: ");
		scanf("%f", &N3);
		
		printf("\nDigite a quarta nota: ");
		scanf("%f", &N4);
	
	media= (N1+N2*2+N3*3+N4)/7;
	
	if(media >= 9.0)
		printf("\nConceito A");
		
	else if(media >= 7.5 && media < 9.0 )
		printf("\nConceito B");
		
	else if (media >= 6.0 && media < 7.5)
		printf("\nConceito C");
	
	else if(media < 6.0)
		printf("\nConceito D");
	}
	getch();
}
