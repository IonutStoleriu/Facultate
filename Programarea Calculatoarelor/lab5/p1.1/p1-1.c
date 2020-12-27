#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
void citireMatrice(int a[][SIZE], int m, int n);
void afisareMatrice(int a[][SIZE], int m, int n);
void adunareMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE], int m, int n);
void inmultireMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE], int m1,int n1,int m2,int n2);
int main()
{
	int m1,n1,m2,n2;
	int a[20][SIZE],b[20][SIZE],c[20][SIZE],d[20][SIZE],e[20][SIZE], m,n;
	
	printf("Prima matrice r,c:");
	scanf("%d,%d",&m1,&n1);
	printf("Prima Matrice:\n");
	citireMatrice(a,m1,n1);
	
	printf("A doua matrice r,c:");
	scanf("%d,%d",&m2,&n2);
	printf("A doua matrice:\n");
	citireMatrice(b,m2,n2);
	if(m1==m2 || n1==n2 )
	{
	adunareMatrice(a,b,c,m1,n1);
	printf("\nMatricea A = ");
	afisareMatrice(a,m1,n1);
	printf("\nMatricea B = ");
        afisareMatrice(b,m2,n2);
	printf("\nMatricea A+B = ");
	afisareMatrice(c,m1,n1);
	}
	else
	{
		printf("Adunare nu poate fi facuta!\n");
	}
	
	if(m1!=n2)
	{
		printf("\nInmultirea nu se poate face");
	}
	else
	{
		inmultireMatrice(a,b,e,m1,n1,m2,n2);
		printf("\nA*n=");
		afisareMatrice(e,m1,n2);
	}


	printf("\nInmultire:");
	printf("\nPrima matrice m,n=");
	scanf("%d,%d",&m1,&n1);
	printf("A=\n");
	citireMatrice(a,m1,n1);
	
	printf("A doua matrice m,n=");
	scanf("%d,%d",&m2,&n2);
	printf("B=\n");
	citireMatrice(b,m2,n2);
	
	printf("\nA*B=");
	if(n1!=m2)
		printf("Inmultirea nu se poate face");
	else
	{
		inmultireMatrice(a,b,d,m1,n1,m2,n2);
		afisareMatrice(d, m1,n2);
	}
	

	return 0;
}
void citireMatrice(int a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void afisareMatrice(int a[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
	}
}
void adunareMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
}
void inmultireMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE], int m1, int n1,int m2, int n2)
{
	int i,j,k;
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(k=0;k<n1;k++)
				c[i][j]+=a[i][k]*b[k][j];
}

