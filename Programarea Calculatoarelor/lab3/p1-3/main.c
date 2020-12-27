#include <stdio.h>
#include <math.h>
int minimum(int a, int b, int c);
int maximum(int a, int b, int c);
double media_aritmetica(int a, int b, int c);
double media_geometrica(int a, int b, int c);
void afisare(int min, int max, double ma, double mg);

int main()
{
	int a,b,c;
	int min, max;
	double ma, mg;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);

	min=minimum(a,b,c);
	max=maximum(a,b,c);
	ma=media_aritmetica(a,b,c);
	mg=media_geometrica(a,b,c);
	
	afisare(min, max, ma, mg);	
	

	return 0;
}
int minimum(int a, int b, int c)
{
	int min;
	if(a<b)
		min=a;
	else
		min=b;
	if(min>c)
		min=c;
	return min;
}
int maximum(int a, int b, int c)
{
	int max;
	if(a>b)
		max=a;
	else
		max=b;
	if(max<c)
		max=c;
	return max;
}
double media_aritmetica(int a, int b, int c)
{
	double ma;
	ma=((double)a+(double)b+(double)c)/3.0;
	return ma;
}
double media_geometrica(int a, int b, int c)
{
	double mg;
	mg=sqrt(a*b*c);
	return mg;
}
void afisare(int min, int max, double ma, double mg)
{
	printf("Minimul este %d\n",min);
	printf("Maximul este %d\n",max);
	printf("Media artimetica este %.2lf\n",ma);
	printf("Media geometrica este %.2lf\n",mg);
}


