#include <stdio.h>
#include <conio.h>
main(){
	
	int x;
	float Alt, Peso;
	bool AltValida, PesoValido;
	
	for(x=1; x<=10; x++)
	{
		printf("\nParticipante %d, digite sua altura: ", x);
		scanf("%f", &Alt);
		
		printf("Digite agora seu peso: ");
		scanf("%f", &Peso);
		
		if(Peso<=80  && Peso>=70)
	   		 
				PesoValido=true;
		
		if(Alt>=1.75 && Alt<=1.9)
		
			 AltValida=true;		
	
		
		if(PesoValido == true && AltValida == true)
			 printf("\nAceito\n");
		
		else if(PesoValido == true && AltValida == false)
			 printf("\nRecusado por altura");
		
		else if(PesoValido == false && AltValida == true)
			 printf("\nRecusado por peso");
	
		else
			 printf("\nTotalmente recusado");
		
		PesoValido = false;
		AltValida = false;
	}
	getche();
}
