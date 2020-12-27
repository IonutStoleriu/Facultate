#include <stdio.h>
#include <math.h>
#define SIZE 10
void citireMatrice(int a[][SIZE], int m);
void afisareMatrice(int a[][SIZE], int m);
void prelucrareMatrice(int a[][SIZE], int m);
int main()
{
	int m;
	int a[10][SIZE];
	printf("Introduceti ordinul matricei:");
	scanf("%d",&m);
	citireMatrice(a,m);
	printf("\n");
	afisareMatrice(a,m);
	prelucrareMatrice(a,m);


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
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void prelucrareMatrice(int a[][SIZE], int m)
{
	int i,j;
	int sum=0;
	int prod=1;
	double ma=0,mg=1;
	int count=0;
	for(i=0;i<m/2;i++)
		for(j=i+1;j<m-i-1;j++)
		{	
			printf("%d, ",a[i][j]);
			sum+=a[i][j];
		}
	printf("\nSuma este:%d\n",sum);
	
	for(i=m/2+1;i<m;i++)
		for(j=m-i;j<i;j++)
		{
			printf("%d,",a[i][j]);
			prod*=a[i][j];
		}
	printf("\nProdusul este:%d\n",prod);
	

	for(i=0;i<m/2;i++)
		for(j=i+1;j<m-i-1;j++)
		{
			printf("%d, ",a[j][i]);
			ma+=a[j][i];
			count++;
		}
		ma=ma/(double)count;
	
	printf("\nMedia aritmetica este:%.2lf:\n",ma);

	for(i=m/2+1;i<m;i++)
		for(j=m-i;j<i;j++)
		{
			printf("%d, ",a[j][i]);
			mg*=a[j][i];
		}
		mg=sqrt(mg);
	
	printf("\nMedia geometrica este:%.2lf\n",mg);



}
