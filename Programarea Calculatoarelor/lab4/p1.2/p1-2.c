#include <stdio.h>
void citireVector(double v[], int size);
void afisareVector(double v[], int size);
void adunareVectori(double x[], double y[], double z[], int size);
void inmultireVectori(double x[], double y[], double z[], int size);
void scalarVector(double x[], double sc, int size);
double sumaElemVectori(double x[], double y[], int size);

int main()
{
	int nr_tip, cantitate;
	double total, p, total_final;
	double v1[50],v2[50],v3[50],v4[50],v5[50],v6[50],v7[50],v8[50],v9[50];
	int i;
	
	printf("Introduceti numarul de tipuri:");
	scanf("%d",&nr_tip);
	
	printf("Introduceti preturile pentru cele %d tipuri:\n",nr_tip);
	citireVector(v1,nr_tip);

	printf("Stocuri magazin T1:\n");
	printf("Introduceti numarul de tipuri:");
	scanf("%d",&cantitate);
	printf("Introduceti cantitatile:"); 
	citireVector(v2, cantitate);

	printf("Stocuri magazin T2:\n");
	printf("Introduceti numarul de tipuri:");
	scanf("%d",&cantitate);
	printf("Introduceti cantitatile:");
	citireVector(v3,cantitate);

	printf("Raport invetar pentru firma trioda.\n\n\n");
	printf("Firma Trioda comercializeaza %d tipuri de componente electronice\n");
	
	printf("Pret/bucata pentru fiecare componenta electronica=");
	afisareVector(v1,nr_tip);

	printf("\tStocuri magazin Trioda1=");
	afisareVector(v2,cantitate);

	printf("\tStocuri magazin Trioda2=");
	afisareVector(v3,cantitate);

	adunareVectori(v2,v3,v4,cantitate);
	printf("\t\tTotal stocuri firma=");
	afisareVector(v4,cantitate);
	

	inmultireVectori(v1,v2,v6,cantitate);
	printf("\tValoare stocuri magazin Trioda1=");
	afisareVector(v6,cantitate);	

	inmultireVectori(v1,v3,v7,cantitate);
	printf("\tValoare stocuri magazin Trioda2=");
	afisareVector(v7,cantitate);

	adunareVectori(v6,v7,v8,cantitate);
	printf("\t\tValoare stocuri firma=");
	afisareVector(v8,cantitate);

	total=sumaElemVectori(v6,v7,cantitate);
	printf("Valoare totala marfa = %.2lf lei",total);

	
	
	printf("\n\nSfarsit raport inventar.\n");

	printf("\nIntroduceti procentul de crestere a preturilor:");
	scanf("%lf",&p);
	
	for(i=0;i<cantitate;i++)
	{
		v9[i]=v1[i];
		v5[i]=0;
		v6[i]=0;
		v7[i]=0;
		v8[i]=0;
		
	}
	scalarVector(v1,p/100,cantitate);
	adunareVectori(v9,v1,v5,cantitate);

	inmultireVectori(v5,v2,v6,cantitate);
	inmultireVectori(v5,v3,v7,cantitate);
	adunareVectori(v6,v7,v8,cantitate);

	printf("Dupa cresterea pretului cu %.02lf%\n",p);
	printf("Valoare stocuri marfa = ");
	afisareVector(v8,cantitate);
	
	total_final=sumaElemVectori(v6,v7,cantitate);
	printf("Valoare totala marfa = %.2lf",total_final);



		
	return 0;
}
void citireVector(double v[], int size)
{
	int i;
	for(i=0;i<size;i++)
		scanf("%lf",&v[i]);
}
void afisareVector(double v[], int size)
{
	int i;
	printf("(");
	for(i=0;i<size-1;i++)
	{
		printf("%g, ",v[i]);
	}
	printf("%g)\n",v[i]);
}
void adunareVectori( double x[], double y[],double z[], int size)
{
	int i;
	for(i=0;i<size;i++)
		{
			z[i]=x[i]+y[i];
		}
	
}
void inmultireVectori(double x[], double y[], double z[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		z[i]=x[i]*y[i];
	}
}
void scalarVector(double x[], double sc, int size)
{
	int i;
	for(i=0;i<size;i++)
		x[i]=sc*x[i];
}
double sumaElemVectori(double x[], double y[], int size)
{
	int i;
	double sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+x[i]+y[i];
	}
	return sum;
}
