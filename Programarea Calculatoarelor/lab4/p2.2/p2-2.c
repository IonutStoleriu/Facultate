#include <stdio.h>
int citireVectorIntreg(int v[]);
void afisareVectorIntreg(int v[], int size);
int distinct(int a[], int b[], int n);
int main()
{
	int v[100],b[100];
	int n,m;
	printf("Introduceti valorile:");
	n=citireVectorIntreg(v);
	printf("Vectorul este:");
	afisareVectorIntreg(v,n);
	
	m=distinct(v,b,n);
	printf("\ndistinct:");
	afisareVectorIntreg(b,m);


	return 0;
}
int citireVectorIntreg(int v[])
{
	int i=0;
	while(1)
	{
		scanf("%d",&v[i]);
		if(v[i]==0)
			break;
		i++;
	}
	return i;
}
void afisareVectorIntreg(int v[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	printf("%d ",v[i]);
	}
}
int distinct(int a[], int b[], int n)
{
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(i==j)
		{
			b[k]=a[i];
			k++;
		}
	}
	return k;
}	
		
