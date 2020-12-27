#include <stdio.h>
void citireVector(int v[], int size);
void afisareVector(int v[], int size);
void sortareVector(int v[], int size);
int main()
{
	int n;
	int v[30];
	printf("Introduceti nr de elemente:");
	scanf("%d",&n);
	printf("Introduceti elementele:");
	citireVector(v,n);
	printf("Vectorul este:");
	afisareVector(v,n);
	sortareVector(v,n);
	printf("Vectorul sortat crescator este:");
	afisareVector(v,n);

	return 0;
}
void citireVector(int v[], int size)
{
	int i;
	for(i=0;i<size;i++)
		scanf("%d",&v[i]);
}
void afisareVector(int v[], int size)
{
	int i;
	for(i=0;i<size-1;i++)
		printf("%d, ",v[i]);
	printf("%d.\n",v[i]);
}
void sortareVector(int a[], int size)
{
	int i,j;
	int aux;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[j]>a[i])
			{
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
}


	
