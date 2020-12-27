#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct _NORME{
	double norma_infinit;
	double norma_1;
	double norma_2;
};
typedef struct _NORME NORME;
NORME norme1(NORME norme, double *a, int n);
void citireVector(double *a, int n);
int main()
{
	NORME nor,res;
	int n;
	printf("Introduceti nr. elemente:");
	scanf("%d",&n);
	double *a;
	a=(double *)malloc(sizeof(double));
	if(a==NULL)
	{
		printf("Eroare la alocarea memoriei");
		exit(EXIT_FAILURE);
	}
	printf("Elementele vectorului sunt:");
	citireVector(a,n);
	res=norme1(nor,a,n);
	printf("Norma inifinit=%.2lf\n",res.norma_infinit);
	printf("Norma 1=%.2lf\n", res.norma_1);
	printf("Norma_2=%.2lf\n", res.norma_2);
	
	return 0;
}
void citireVector(double *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lf",(a+i));
	}
	
}
NORME norme1(NORME norme, double *a, int n)
{
	int i;
	norme.norma_infinit=*a;
	for(i=0;i<n;i++)
	{
		if(norme.norma_infinit<*(a+i))
			norme.norma_infinit=*(a+i);
	}

	
	for(i=0;i<n;i++)
	{
	norme.norma_1+=abs(*(a+i));
	}

	for (i=0;i<n;i++)
	{
		norme.norma_2+=*(a+i)* (*(a+i));
	}
	norme.norma_2=sqrt(norme.norma_2);
	return norme;
}

