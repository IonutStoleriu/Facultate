#include <stdio.h>
#include "header.h"
int main()
{
	int a,s,y;
	printf("Introduceti sirul de numere:\n");
	s=suma();
	printf("Suma este:");
	afisare(s);
	printf("\nIntroduceti un nr intreg:");
	scanf("%d",&y);
	printf("suma/nr_introdus=");
	rezultat(s,y);


	
	
	return 0;
}
