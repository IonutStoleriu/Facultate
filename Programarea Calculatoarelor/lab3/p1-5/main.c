#include <stdio.h>
#include <math.h>
double f(double x);
double g(double x, double y);
void function(double y, double pas);
int main()
{
	double y,pas;
	double f1,g1;
	printf("y=");
	scanf("%lf",&y);
	printf("pas=");
	scanf("%lf",&pas);

	function(y,pas);
	


	return 0;
}
double f(double x)
{
	if(x<=2)
	{
		return (x*x+3*x+5);
	}
	else if(x>2 && x<8)
	{
		return (3*x);
	}
	else if(x>=8)
	{
		return (exp(x)+2);
	}
}
double g(double x, double y)
{
	return 3*pow(x,2)+(sin(x)/pow(y,0.25));
}
void function(double y, double pas)
{
	double x;
	double f1,g1;
	for(x=0;x<=10;x+=pas)
	{
		f1=f(x);
		g1=g(x,y);
		printf("f1=%.2lf\n",f1);
		printf("g1=%.2lf\n",g1);
	}
}
		
