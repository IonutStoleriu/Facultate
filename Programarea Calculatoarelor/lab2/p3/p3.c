#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	double p,aria;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);

	p=(a+b+c)/2.0;
	aria=sqrt(p*(p-a)*(p-b)*(p-c));

	printf("Aria este %lf", aria);
	
	return 0;
}
