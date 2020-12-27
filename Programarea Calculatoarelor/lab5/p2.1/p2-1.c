#include <stdio.h>
#include <math.h>
#define SIZE 10
void citire(double a[][SIZE], int m, int n);
void afisare(double a[][SIZE], int m, int n);
double minimum(double v[],int size);
double maximum(double v[], int size);
double max_sum_line(double a[][SIZE], int m, int n);
double transpusaMatrice(double a[][SIZE], double b[][SIZE], int m);
int main()
{
	int m,n;
	double a[20][SIZE], a_t[20][SIZE];
	double max_l,max_c;
	scanf("%d %d",&m,&n);
	printf("Matricea are %d linii si %d coloane.\n",m,n);

	citire(a,m,n);
	printf("Matricea este:\n");
	afisare(a,m,n);
	
	max_l=max_sum_line(a,m,n);
	printf("Maximul sumelor de pe fiecare linie este:%g\n",max_l);


	transpusaMatrice(a,a_t,m);
	max_c=max_sum_line(a_t,m,n);
	printf("Maximul sumelor de pe fiecare coloana este:%g\n",max_c);
	
	printf("transpusa:\n");
	afisare(a_t, m,n);
	return 0;
}
void citire(double a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%lf",&a[i][j]);
}
void afisare(double a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%g ",a[i][j]);
		printf("\n");
	}
}
double minimum(double v[],int size)
{
	int i;
	double min=v[0];
	for(i=0;i<size;i++)
	{	
		if(min>v[i])
			min=v[i];
	}
	return min;
}
double maximum(double v[], int size)
{
	int i;
	double max=v[0];
	for(i=0;i<size;i++)
	{
		if(max<v[i])
			max=v[i];
	}
	return max;
}



double max_sum_line(double a[][SIZE], int m, int n)
{
	int i,j;
	double sum[m];
	double max;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			sum[i]+=a[i][j];
	}
	for(i=0;i<5;i++)
		printf("%g ",sum[i]);
	max=maximum(sum,m);
	return max;
}
double transpusaMatrice(double a[][SIZE], double b[][SIZE], int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<i;j++)

			b[i][j]=a[j][i];
	}
}			

