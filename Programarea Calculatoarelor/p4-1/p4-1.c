#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x1,x2;
	int i,j;
	int sd=0;
	printf("x1=");
	scanf("%d",&x1);
	printf("x2=");
	scanf("%d",&x2);
	if(x1>x2)
	{
		printf("Interval gresit (Conditie: x1<x2)");
		exit(EXIT_FAILURE);
	}	
	for(i=x1;i<x2;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sd=sd+j;
		}
		if(sd>=x1 && sd<=x2)
			printf(" Numarul %d este prieten cu %d\n",i,sd);
		sd=0;
			
	}
	return 0;
}
