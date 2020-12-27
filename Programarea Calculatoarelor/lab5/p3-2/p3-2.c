#include <stdio.h>
#define SIZE 10
void citireMatrice(int a[][SIZE], int m, int n);
void afisareMatrice(int a[][SIZE], int m, int n);
void puncteDeVarf(int a[][SIZE], int m, int n);
void transpusa(int a[][SIZE], int b[][SIZE], int m, int n);
int main()
{
	int m,n;
	int a[10][SIZE], b[10][SIZE];
	printf("Introduceti m,n:");
	scanf("%d,%d",&m,&n);
	printf("Introduceti valorile:\n");
	citireMatrice(a,m,n);

	printf("Rezultat:\n");
	afisareMatrice(a,m,n);
	transpusa(a,b,m,n);
	
	printf("\nValorile altitudinilor sunt:");
	afisareMatrice(b,m,n);
	
	printf("\n");
	puncteDeVarf(b,m,n);
	return 0;
}
void citireMatrice(int a[][SIZE],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
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
void puncteDeVarf(int a[][SIZE], int m, int n)
{
	int vf=1;
	int x,y;
	int offset[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
		int i,j,k;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=1;k<=8;k++)
				{
					x=i+offset[k][0];
					y=j+offset[k][1];
					if(x>=0 && y>=0 && x<=m && y<=n)
					{
						if(a[i][j]<a[x][y])
							vf=0;
					}
				}
			if(vf==1)
				printf("Parcela de varf la coordonatele:%d,%d \n",i+1,j+1);
			vf=1;
			}
		}
}
void transpusa(int a[][SIZE], int b[][SIZE], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[j][i];
}


