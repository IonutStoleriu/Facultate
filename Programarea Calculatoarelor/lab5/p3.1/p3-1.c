#include <stdio.h>

#define SIZE 20
void citireMatrice(double a[][SIZE], int n);
void afisareMatrice(double a[][SIZE], int n); 
void matriceUnitate(int a[][SIZE], int n);
int factorial(int x);
void inmultireMatrice_s(double a[][SIZE],double t[][SIZE], int n, double x);
void inmultireMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE],int n);
int main()
{
	double a[20][SIZE], b[20][SIZE], t[20][SIZE], c[20][SIZE];
	int n,i;
	double s;
	printf("Introduceti ordinul matricei: ");
	scanf("%d",&n);
	if(n<0 || n>=20)
	{
		printf("Ordinul matricei nu corespunde");
	}
	else
	{
	s=1/(double)factorial(n);
	printf("Introduceti matricea A:\n");
	citireMatrice(a,n);
	printf("Matricea A este:\n");
	afisareMatrice(a,n);
	
	inmultireMatrice(a,a,c,n);
	for(i=1;i<n-1;i++)
	{
	inmultireMatrice(a,c,c,n);
	}
	
	afisareMatrice(c,n);

	inmultireMatrice_s(c,t,n,s);
	afisareMatrice(t,n);

	}
	return 0;
}
void citireMatrice(double a[][SIZE], int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%lf",&a[i][j]);
}
void afisareMatrice(double a[ ][SIZE], int n)
{
	int i,j;
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%.2lf ",a[i][j]);
		printf("\n");
	}
}
void matriceUnitate(int a[][SIZE], int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
			}
			else 
				a[i][j]=0;
		}
}
void inmultireMatrice_s(double a[][SIZE],double t[][SIZE], int n, double x)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			t[i][j]=a[i][j]*x;
}
int factorial(int x)
{
	if(x>=1)
	{
		return x*factorial(x-1);
	}
	else
	{
		return 1;
	}
}
void inmultireMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE], int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
}
void adunareMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
}
