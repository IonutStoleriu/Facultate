#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Introduceti lungimile laturilor:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);

	if(a==b&&b==c)
		printf("Triunghiul este echilateral\n");
	if(a==sqrt(b*b+c*c) || b==sqrt(a*a+c*c) || c==sqrt(b*b+a*a))
		printf("Triunghiul este dreptunghic\n");
	if(a==b || a==c || b==c)
		printf("Triunghiul este isoscel");
	if(a!=b && b!=c)
		printf("Triunghiul este oarecare\n");
	return 0;

}
