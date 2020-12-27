#include <stdio.h>
#define SIZE 50
void citireMatrice(int a[][SIZE], int m, int n);
void afisareMatrice(int a[][SIZE], int m, int n);
void transpusaMatrice(int a[][SIZE], int t[][SIZE],int m, int n);
void inmultireMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE], int m1, int n1, int m2, int n2);
int main()
{
	int m;
	int a[50][SIZE], a_t[50][SIZE], b[50][SIZE], b_t[50][SIZE], c[50][SIZE], c_t[50][SIZE], d[50][SIZE] ;
	printf("Introduceti ordinul matricei patratice:");
	scanf("%d",&m);
	
	printf("Introduceti matricea A:\n");
	citireMatrice(a,m,m);

	printf("Introduceti matricea B:\n");
	citireMatrice(b,m,m);
	
	printf("Matricea A=\n");
	afisareMatrice(a,m,m);
	printf("Matricea B=\n");
	afisareMatrice(b,m,m);

	transpusaMatrice(a,a_t,m,m);
	transpusaMatrice(b,b_t,m,m);

	printf("Matricea A transpusa= \n");
	afisareMatrice(a_t,m,m);
	printf("Matricea B transpusa= \n");
	afisareMatrice(b_t,m,m);
	
	inmultireMatrice(a,b,c,m,m,m,m);
	transpusaMatrice(c,c_t,m,m);
	printf("Membrul stang = \n");
	afisareMatrice(c_t,m,m);

	inmultireMatrice(a_t,b_t,d,m,m,m,m);
	printf("Membrul drept =\n");
	afisareMatrice(d,m,m);
	


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
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void transpusaMatrice(int a[][SIZE],int t[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			t[i][j]=a[j][i];

		
}
void inmultireMatrice(int a[][SIZE], int b[][SIZE], int c[][SIZE], int m1, int n1,int m2,int n2)
{
	int i,j,k;
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(k=0;k<n1;k++)
				c[i][j]+=a[i][k]*b[k][j];
}
	
