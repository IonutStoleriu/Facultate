#include <stdio.h>
#include <stdlib.h>
struct _MULTIME {
	unsigned int cardinal;
	double *p;
};
typedef struct _MULTIME MULTIME;

void citireElemente(MULTIME m, unsigned int n);
void afisareElemente(MULTIME m, unsigned int n);
MULTIME intersectie(MULTIME A, MULTIME B, MULTIME R);
MULTIME scadere(MULTIME A, MULTIME B, MULTIME R);
int main()
{	
	unsigned int n;
	unsigned int m;
	MULTIME A,B,R;
	printf("Card A=");
	scanf("%d",&A.cardinal);
	printf("Card B=");
	scanf("%d",&B.cardinal);

	A.p=(double *)malloc(A.cardinal*sizeof(double));
	if(A.p==NULL)
	{
		printf("Eroare la alocarea memoriei");
		exit(EXIT_FAILURE);
	}
	B.p=(double*)malloc(A.cardinal*sizeof(double));
	if(B.p==NULL)
	{
		printf("Eroare la alocarea memoriei");
		exit(EXIT_FAILURE);
	}
	R.p=(double*)malloc((A.cardinal+B.cardinal)*sizeof(double));
	if(R.p==NULL)
	{
		printf("Eroare la alocarea memoriei");
	}

	printf("Introduceti elementele multimii A:");
	citireElemente(A,A.cardinal);
	printf("Introduceti elementele multii B:");
	citireElemente(B,B.cardinal);

	printf("\nA=");
	afisareElemente(A,A.cardinal);
	printf("\nB=");
	afisareElemente(B,B.cardinal);

	printf("\nIntersectia dintre A si B este:\n");
//	R=intersectie(A,B,R);
//	afisareElemente(R,R.cardinal);
	printf("\nCardinalul intersectiei este:%d\n",R.cardinal);

	printf("A-B simetric este: \n");
	R=scadere(A,B,R);
	printf("Cardinalul este:%d",R.cardinal);
	afisareElemente(R,R.cardinal);
	
	return 0;
}


void citireElemente(MULTIME m, unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lf",(m.p+i));
	}
}
void afisareElemente(MULTIME m, unsigned int n)
{
	int i;
	printf("{");
	for(i=0;i<n-1;i++)
	{
		printf("%.2lf, ",*(m.p+i));
	}
	printf("%.2lf}",*(m.p+i));

}
MULTIME intersectie(MULTIME A, MULTIME B, MULTIME R)
{
	int i,j,k=0;
	for(i=0;i<A.cardinal;i++)
		for(j=0;j<B.cardinal;j++)
		{
			if(*(A.p+i)==*(B.p+j))
				{
					*(R.p+k)=*(A.p+i);
					k++;
				}
		}
	R.cardinal=k;
	return R;
}	
MULTIME scadere(MULTIME A, MULTIME B,MULTIME R)
{	
	int diferit=0;
	int i,j,k=1,l=0;
	for(i=0;i<A.cardinal;i++)
	{
		if(diferit==1)
		{
			*(R.p+l)=*(A.p+i);
			k++;
			diferit=1;
			l++;
		}		
		for(j=0;j<B.cardinal;j++)
		{
			if(*(A.p+i)==*(B.p+j))
				diferit=0;
		}
	}
	R.cardinal=k;
	return R;
}

