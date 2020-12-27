#include <stdio.h>
int d_sum(int n);
int n_prietene(int a, int b);
int main()
{
	int i,j, pr,sd;
	int x,y;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	
	for(i=x;i<=y;i++)
	{
		sd=d_sum(i);
		if(sd>=x && sd<=y)
		{
			pr=n_prietene(i,sd);
			if(pr==1)
			{
				printf("%d prieten cu %d\n",i,sd);
			}
		}
	}

			
	return 0;
}
int d_sum(int n)
{
	int i,s=0;
	for(i=1;i<n;i++)
	{
		if((n%i)==0){
		s=s+i;
		}
	}
	return s;
}
int n_prietene(int a, int b)
{
	int a_sd,b_sd;
	a_sd=d_sum(a);
	b_sd=d_sum(b);
	if(a==b_sd || b==a_sd)
		return 1;
	else
		return 0;
}
