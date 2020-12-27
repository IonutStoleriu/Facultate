#include <stdio.h>
#include <math.h>
int r_lungimi(int a, int b, int c);
int echilateral(int a, int b, int c);
int isoscel(int a, int b, int c);
int dreptunghic(int a, int b, int c);
int main()
{
	int a, b, c;
	int ech, iso, dre, lun;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	lun=r_lungimi(a,b,c);
	ech=echilateral(a,b,c);
	iso=isoscel(a,b,c);
	dre=dreptunghic(a,b,c);
	if(lun==1)
		{
			printf("Lungimile sunt valide\n");
			if(ech==1)
				printf("Triunghi echilateral\n");
			else if(iso==1)
				printf("Triunghi isoscel\n");
			else if(dre==1)
				printf("Triunghi dreptunghic\n");
			else
				printf("Triunghi oarecare");
		}
	else
	{
		printf("Lungimile nu pot reprezenta laturile unui triunghi");
	}


	

	return 0;
}
int r_lungimi(int a, int b, int c)
{
	if(a>0 && b>0 && c>0)
		return 1;
	else
		return 0;
}
int echilateral(int a, int b, int c)
{
	if(a==b==c)
		return 1;
	else
		return 0;
}
int isoscel(int a, int b, int c)
{
	if(a==b || a==c || b==c)
		return 1;
	else
		return 0;
}
int dreptunghic(int a, int b, int c)
{
	if(a==sqrt(b*b+c*c) || b==sqrt(a*a+c*c) || c==sqrt(a*a+b*b))
		return 1;
	else
		return 0;
}

