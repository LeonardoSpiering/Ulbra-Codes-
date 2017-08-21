#include<stdio.h>
#include<conio.h>
main()
{
	int x, ac=60;
	float p, mp=0, pb=0;
	
	for(x=1; x<=20; x++)
	{
		printf("\nDigite seu peso: ");
		scanf("%f", &p);
		if(p>60){
			mp = mp+p;
			ac++;
		}
		if(p<=60){
			if(p>pb){
				pb = p;
			}
		}
	}
	mp= mp/ac;
	printf("\nA media de peso acima de 60 e %.2f", mp);
	printf("\nMaior peso menor que 60 e %.2f", pb);
}
