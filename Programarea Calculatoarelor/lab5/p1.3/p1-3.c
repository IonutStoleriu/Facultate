#include <stdio.h>
#include <math.h>
#define SIZE 10
void citireMatrice(double a[][SIZE], int m, int n);
void afisareMatrice(double a[][SIZE], int m, int n);
void adunareMatrice(double a[][SIZE], double b[][SIZE],double c[][SIZE], int m, int n);
void inmultireMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE],int m1,int n1,int m2,int n2);
void transpusaMatrice(double a[][SIZE], double b[][SIZE], int m, int n);
void citireColoana(double a[][SIZE], int m, int n);
int main()
{
	double a[10][SIZE], b[10][SIZE], c[10][SIZE];
	double p[10][SIZE], t[10][SIZE];
	double b_t[10][SIZE];
	double g;
	int m,n;
	double zile;
	printf("Plata pentru o zi de lucru este:");
	scanf("%lf",&g);
	printf("%g\n",g);
	
	scanf("%d %d",&m,&n);
	printf("Sunt %d pitici si fiecare pitic are %d rafturi\n",m,n);
	citireMatrice(a,m,n);
	printf("Rafturile piticilor:\n");
	afisareMatrice(a,m,n);

	citireMatrice(b,m,n);
	printf("Comenzile piticilor:\n");
	afisareMatrice(b,m,n);
	
	adunareMatrice(a,b,c,m,n);
	printf("Stocul piticilor dupa ce au primit comanda:\n");
	afisareMatrice(c,m,n);

	citireMatrice(p,n,1);
	printf("Lista de preturi este:\n");
	afisareMatrice(p,n,1);
	
	inmultireMatrice(b,p,t,m,n,n,1);
	printf("Fiecare pitic are de platit:\n");
	afisareMatrice(t,m,1);	
	printf("Numarul de zile pe care tre sa le munceasca fiecare pitic este:\n"); 
	
	int i,j;
	for(i=0;i<m;i++)
	{
		t[i][0]=ceil(t[i][0]/g);
		printf("%g\n",t[i][0]);
	}


	


	return 0;
}
void citireMatrice(double a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%lf",&a[i][j]);
}

void afisareMatrice(double a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%g ",a[i][j]);
		printf("\n");
	}
}
void adunareMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
}
void inmultireMatrice(double a[][SIZE], double b[][SIZE], double c[][SIZE],int m1, int n1,int m2,int n2)
{
	int i,j,k;
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(k=0;k<n1;k++)
				c[i][j]+=a[i][k]*b[k][j];
			
}
void transpusaMatrice(double a[][SIZE], double b[][SIZE], int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[j][i];
}


