#include <stdio.h>
#include "header.h"
int suma()
{
	int n;
	int suma=0;
	while(1)
	{
		scanf("%d", &n);
		if(n==0)
			break;
		suma=suma+n;
	}
	return suma;
}
void afisare(int a)
{
	printf("%d",a);
}
double rezultat(int s, int y)
{
	double rez=(double)s/(double)y;
	printf("%.2lf",rez);
}
