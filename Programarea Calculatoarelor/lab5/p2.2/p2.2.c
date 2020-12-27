#include <stdio.h>
#define SIZE 10
void citireMatrice(int a[][SIZE], int m);
void afisareMatrice(int a[][SIZE], int m);
void interschimbare_linii(int a[][SIZE], int m, int i1, int i2);
void interschimbare_coloane(int a[][SIZE], int m, int i1,int i2);
void sortare_crescator(int a[][SIZE], int m);
void sortare_crescator_c(int a[][SIZE], int m);
void sortare_crescator_diag(int a[][SIZE], int m);
int main()
{
	int m;
	int a[10][SIZE];
	printf("Introduceti ordinul matricei patratice:");
	scanf("%d",&m);
	printf("Introduceti matricea:\n");
	citireMatrice(a,m);
	afisareMatrice(a,m);
	printf("l1-3");
	interschimbare_linii(a,m,1,3);
	afisareMatrice(a,m);
	interschimbare_coloane(a,m,2,3);
	printf("c2-3");
	afisareMatrice(a,m);
	sortare_crescator(a,m);
	afisareMatrice(a,m);
	sortare_crescator_c(a,m);
	afisareMatrice(a,m);
	sortare_crescator_diag(a,m);
	afisareMatrice(a,m);
	return 0;
}
void citireMatrice(int a[][SIZE], int m)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void afisareMatrice(int a[][SIZE], int m)
{
	int i,j;
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void interschimbare_linii(int a[][SIZE], int m, int i1, int i2)
{
	int i,aux;
		for(i=0;i<m;i++)
		{
			aux=a[i1][i];
			a[i1][i]=a[i2][i];
			a[i2][i]=aux;
		}
}
void interschimbare_coloane(int a[][SIZE], int m, int i1, int i2)
{
	int i,aux;
	for(i=0;i<m;i++)
	{
		aux=a[i][i1];
		a[i][i1]=a[i][i2];
		a[i][i2]=aux;
	}
}
void sortare_crescator(int a[][SIZE], int m)
{
	int i,j;
	int aux;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[0][j]>a[0][i])
			{
				aux=a[0][i];
				a[0][i]=a[0][j];
				a[0][j]=aux;
			}
		}
	}
}
void sortare_crescator_c(int a[][SIZE], int m)
{
	int i,j;
	int aux;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[j][0]>a[i][0])
			{
				aux=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=aux;
			}
		}
	}
}
void sortare_crescator_diag(int a[][SIZE], int m)
{
	int i,j,k,l;
	int aux;
	for(i=0,j=0;i<m&&j<m;i++,j++)
	{
		for(k=0,l=0;k<m&&l<m;k++,l++)
			if(a[i][j]<a[k][l])
			{
				aux=a[i][j];
				a[i][j]=a[k][l];
				a[k][l]=aux;
			}
	}
}

	
		






