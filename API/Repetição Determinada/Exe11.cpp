#include<stdio.h>
#include<conio.h>
main()
{
	int num=1, x=1, r;
	
	for(num=1; num<=5; num++)
	{
		for(x=1; x<=10; x++)
		{
		  r= num*x;
		  printf("\n%d  X  %d = %d", num, x, r);
	    }
	printf("\n************"); 
	}
}
