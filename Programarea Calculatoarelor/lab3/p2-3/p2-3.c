#include <stdio.h>
int suma_divizorilor(int n);
int tip(int n);
int main()
{
	int type;
	int i,x,y;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	for(i=x;i<=y;i++)
	{
		type=tip(i);
		if(type==0)
			printf("%d este numar perfect\n",i);
		else if(type==-1)
			printf("%d este numar deficient\n",i);
		else if(type==1)
			printf("%d este  numar abundent\n",i);
	}
	
	return 0;
}
int suma_divizorilor(int n)
{
	int i;
	int sd=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sd=sd+i;
	}
	return sd;
}
int tip(int n)
{
	int sd;
	sd=suma_divizorilor(n);
	if(sd<n)
		return -1;
	else if(sd==n)
		return 0;
	else if(sd>n)
		return 1;
}
