#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	double x1,x2,delta;
	printf("Introduceti coeficientii ecuatiei de gradul 2: \n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	delta=pow(b,2)-4*a*c;
	printf("delta este %.2f",delta);
	if(delta<0)
	{
		printf("Ecuatia nu are solutii reale");
	}
	else if(delta>0)
	{
		if(a!=0)
		{
		printf("Ecuatia are doua solutii reale:\n");
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf("Solutiile sunt x1=%.0f si x2=%lf",x1,x2);
		}
		else
		{
			printf("Ecuatia este de gradul 1\n");
			x1=-c/b;
			printf("solutia este x=%lf",x1);
		}

	}
	else if(delta==0)
	{
		printf("Ecuatia are o singura solutie");
		printf("Solutia este x=%.2f", -b/(2*a));
	}

	return 0;
}


