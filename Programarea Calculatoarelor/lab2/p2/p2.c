#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,p,mg;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	p=a*b;
	mg=sqrt(a*b);
	printf("Produsul este %lf iar media geometrica este %lf" ,p, mg);
	return 0;
}
