#include <stdio.h>
int cmmdc(int a, int b);
int prime(int n);
int main()
{
	int i;
	int n,a,b,c,rez;
	printf("Introduceti nr. de perechi:\n");
	scanf("%d",&n);
	printf("Introduceti perechile:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d,%d",&a,&b);
		c=cmmdc(a,b);
		rez=prime(c);
		if(rez==1)
		{
			printf("(%d,%d),",a,b);
		}

	}
	return 0;
}
int cmmdc(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int prime(int n)
{
	int i;
	int flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
