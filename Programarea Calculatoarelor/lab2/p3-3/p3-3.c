#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b,s,val,nr,poz=0;
	int size=1;
	int min=0;
	int i=1;
	printf("b=");
	scanf("%d",&b);
	
	printf("Introduceti sirul de valori:\n");
	int a[20];
	int x[20];
	
	scanf("%d",&s);
	min=labs(s-b);
	a[0]=min;
	x[0]=s;
	while(1)
	{
		scanf("%d", &s);
		if(s<0)
			break;
		min=labs(s-b);
		a[i]=min;
		x[i]=s;
		i++;
		size++;
	}

/*	for(i=0;i<size;i++)
	{
		printf("%d ", a[i]);
	}
*/	
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			poz=i+1;
		}
	}
//	printf("\n%d %d\n ", min, poz);	
	printf("Elementul din sir cel mai apropiat de b este %d, de pe pozitia %d",x[poz-1],poz);


	
	return 0;
}
