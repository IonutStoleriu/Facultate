#include <stdio.h>
#include <stdlib.h>
void citireVector(int *p, unsigned int n);
void afisareVector(int*p, unsigned int n);
void vector(int *p, unsigned int n);
int sumaCifrelor(int n);
int max(int *p, unsigned int n);
int main()
{
	int i,index;
	int *p,*w;
	unsigned int n;
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Eroare la alocarea memoriei");
		exit(EXIT_FAILURE);
	}
	w=(int*)malloc(n*sizeof(int));
	if(w==NULL)
	{
		printf("Eroare la alocarea memoriei");
		exit(EXIT_FAILURE);
	}
	printf("Introduceti numarul de elemente:");
	scanf("%d",&n);
	printf("Introduceti elementele vectorului:");
	
	citireVector(p,n);
	afisareVector(p,n);
	for(i=0;i<n;i++)
	{
		*(w+i)=*(p+i);
	}
	vector(w,n);
	printf("\nSuma cifrelor elementelor primului vector este:\n");
	afisareVector(w,n);
	index=max(p,n);
	printf("\nIndexul cu cel mai mare numar este:%d",index);
	printf("\nElementul maxim din vector este:%d",*(p+index));



	return 0;
}
void citireVector(int *p, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
}
void afisareVector(int *p, unsigned int n)
{
	int i;
	printf("(");
	for(i=0;i<n-1;i++)
	{
		printf("%d,",*(p+i));
	}
	printf("%d)",(*p+i));
}
int sumaCifrelor(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
void vector(int *p, unsigned int n)
{
	int i,sum;
	for(i=0;i<n;i++)
	{
		sum=*(p+i);
		*(p+i)=sumaCifrelor(sum);
	}
}
int max(int *p, unsigned int n)
{
	int i, index=0;
	int max=*p;
	for(i=0;i<n;i++)
	{
		if(max<*(p+i))
		{
			max=*(p+i);
			index=i;
		}

	}
	return index;
}
	
			

