#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	double f;
	printf("x=");
	scanf("%d",&x);
	if(x<=2)
	{
		f=pow(x,2)+3*x+5;
	}
	else if(x>2&&x<8)
	{
		f=3*x;
	}
	else
		f=exp(x)+2;
	
	printf("f=%lf",f);
	return 0;
}
