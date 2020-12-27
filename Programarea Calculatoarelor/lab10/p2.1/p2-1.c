#include <stdio.h>
#include <stdlib.h>
void pcitireVector(int * arr, unsigned int n); 
void afisareVector(int *arr, unsigned int n);
int *sumaVector(int *x, int *y, unsigned int n);
int *produsScalar(int *x, int*y, unsigned int n);
int main()
{
    int *arr;
    int *arr1;
    int *suma;
    int *produs;
    unsigned int limit;
    int i;
     
    printf("Enter total number of elements: ");
    scanf("%d",&limit);
    
    arr=(int*)malloc(limit*sizeof(int));
    arr1=(int*)malloc(limit*sizeof(int));
    suma=(int*)malloc(limit*sizeof(int));
    produs=(int*)malloc(limit*sizeof(int));
    if(arr==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }			    
    printf("Introduceti elementele v1:");
    pcitireVector(arr,limit);
    printf("Introduc  eti elementele v2:");
    pcitireVector(arr1,limit);

    printf("Primul vector:");
    afisareVector(arr,limit);
    
    printf("Al doilea vector:");
    afisareVector(arr1, limit);
    for(i=0;i<limit;i++)
	*(suma+i)=*(arr+i);
    suma=sumaVector(suma, arr1, limit);
    printf("Suma vectorilor:");
    afisareVector(suma, limit);

  // arr=produs;
    produs=produsScalar(arr, arr1,limit);
    printf("Produsul scalar al vectorilor:");
    afisareVector(produs, limit);
    
     
    return 0;    
}
void pcitireVector(int * arr, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	scanf("%d",(arr+i));
	}
}
void afisareVector(int *arr, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
	printf("\n");
}

int *sumaVector(int *x, int *y, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(x+i)=*(x+i)+*(y+i);

	}
	return x;
}
int *produsScalar(int *x, int *y, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(x+i)=(*(x+i)) * (*(y+i));
	}
	return x;
}

