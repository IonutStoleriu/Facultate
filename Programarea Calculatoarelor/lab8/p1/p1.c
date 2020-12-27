#include <stdio.h>
struct _ADMITERE{
	double valoare_totala;
	int zile;
	double valoare_medie[];
};
typedef struct _ADMITERE ADMITERE;

void citireVector(int total[],int zile);
int main()
{
	ADMITERE a;
	int zile,i,nr_zi;
	double taxa;
	printf("Introduceti numarul de zile:");
	scanf("%d",&zile);
	int candidati[zile];
	double total[zile];
	printf("Introduceti valoarea taxei:");
	scanf("%lf",&taxa);
	printf("La facultatea de Automatica si Calculatoare au fost inscrieri de %02d zile si fiecare candidat a platit o suma de %d lei.\n",zile, taxa);
	printf("Introduceti nr de candidati pe zi:");
	citireVector(candidati,zile);
	for(i=0;i<zile-1;i++)
	{
		total[i]=(candidati[i]*taxa/1000.0);
	}
	printf("Incasarile in cele %2d zile au fost de: \n {", zile);
       	for(i=0;i<zile;i++)
		printf("%.2lf, ",total[i]);

	a.valoare_totala=0;
	for(i=0;i<zile;i++)
	{
	a.valoare_totala+=total[i];
	}
	a,zile=zile;
	

	printf("Valoare medie pe zi este de: {"); 
	for(i=0;i<zile;i++)
		{
		printf("%.2lf ", a.valoare_medie[i]);
		}
	printf("%.2lf} mii lei\n",a.valoare_medie[i]);

	printf("Valoare totala a incasarilor este de: %.2lf\n", a.valoare_totala);
	printf("Numarul de zile este %d\n",zile);


		
	return 0;
}
void citireVector(int total[],int zile)
{
	int i;
	for(i=0;i<zile;i++)
		scanf("%d",&total[i]);
}

