#include <stdio.h>
double f1(double *a, double *x);
int main()
{
	double a,b;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("a=%.2lf si b=%.2lf\n",a,b);
	f1(&a,&b);
	printf("a=%.2lf si b=%.2lf\n",a,b);
	return 0;
}
double f1(double *a, double *x)
{
	*a=*a+100;
	*x=*x+100;
}

