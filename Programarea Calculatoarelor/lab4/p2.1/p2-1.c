#include <stdio.h>
#include <math.h>
int citesteVectorReal2(double v[]);
void scrieVectorReal2(double v[], int n);
double v_medie(double v[], int n);
double abm(double v[], int n);
int nr_componente(double v[], int n);
double functia_y(double v[], int n, double y[]);
void afisare_y(double y[], int n);
int main()
{
	int n;
	double v[100];
	double y[100];
	double xm,xp;
	int nr,nr_y;
	printf("Introduceti valorile:");
	n=citesteVectorReal2(v);
	printf("Vectorul este:");
	scrieVectorReal2(v,n);
	
	xm=v_medie(v,n);
	printf("Valoarea medie=%.2lf\n",xm);
	
	xp=abm(v,n);
	printf("Valoarea abaterii medii patratice este:%.2lf\n",xp);

	nr=nr_componente(v,n);
	printf("Numarul de componente ce nu depasesc valoarea medie este:%d\n",nr);
	
	nr_y=functia_y(v,n,y);
	printf("Vectorul y:\n");
	afisare_y(y,nr_y);

	return 0;
}
int citesteVectorReal2(double v[])
{
	int i=0;
	while(1)
	{
		scanf("%lf",&v[i]);
		if(v[i]==0)
			break;
		i++;
	}
	return i;
}
void scrieVectorReal2(double v[], int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		printf("%g, ",v[i]);
	}
	printf("%g.\n",v[i]);
}
double v_medie(double v[], int n)
{
	double xm,sum=0;
	int i;
	for(i=0;i<n;i++)
		sum=sum+v[i];
	xm=1/(double)n*sum;
	return xm;
}
double abm(double v[], int n)
{
	int i;
	double xm,xp;;
	double sum=0;
	xm=v_medie(v,n);
	for(i=0;i<n;i++)
	{
		sum=sum+pow(v[i]-xm,2);
	}
	xp=sqrt(1/((double)n*((double)n-1))*sum);
	return xp;
}	
int nr_componente(double v[], int n)
{
	double xm;
	int i,nr=0;;
	xm=v_medie(v,n);
	for(i=0;i<n;i++)
	{
		if(v[i]<=xm)
			nr++;
			
	}
	return nr;
}
double functia_y(double v[], int n, double y[])
{
	int i,j;
	j=0;
	double xm=v_medie(v,n);
	for(i=0;i<n;i++)
	{	
		if(v[i]>xm)
		{
			y[j]=v[i];
			j++;
		}
	}
	return j;
}
void afisare_y(double y[], int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("%g ",y[i]);
		if(i%5==0)
			printf("\n");
	}
}	


