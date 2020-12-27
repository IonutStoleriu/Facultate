#include <stdio.h>
int main()
{
	int m;
	double fx;
	char cht;
	printf("m=");
	scanf("%d",&m);
	printf("fx=");
	scanf("%lf",&fx);
	printf("cht=");
	scanf("%s",&cht);

	int *pm=&m;
	double *pfx=&fx;
	char *pcht=&cht;
	
	printf("Valori obtinute prin folosirea operatorului de referentiere\n");
	printf("adresa lui m = %p\n",&m);
	printf("adresa lui fx = %p\n",&fx);
	printf("adresa lui cht = %p\n", &cht);
	
	printf("\nValori obtinute prin folosirea operatorilor & si *\n");
	printf("valoarea de la adresa lui m = %d\n",*(&m));
	printf("valoarea de la adresa lui fx = %lf\n", *(&fx));
	printf("valoarea de la adresa lui cht = %c\n",*(&cht));
	

	printf("\nAdrese obtinute prin folosirea valorilor pointerilor:\n");
	printf("Valoarea pointerului cu adresa lui m = %p\n",pm);
	printf("Valoarea pointerului cu adresa lui fx = %p\n",pfx);
	printf("Valoarea pointerului cu adresa lui cht = %p\n",pcht);
	
	printf("\n Valori obtinute prin dereferentierea pointerilor\n");
	printf("valoarea de la adresa lui m = %d\n",m);
	printf("Valoarea de la adresa lui fx = %lf\n",fx);
	printf("valoarea de la adresa lui cht = %c\n",cht);


	return 0;
}

