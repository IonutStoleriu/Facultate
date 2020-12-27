#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *tab[100];
	FILE *f;
	f=fopen("date.in","r");
	if(!f)
	{
		printf("Eroare la desciderea fisierului");
		exit(EXIT_FAILURE);
	}
	int c;
	int i=0;
	int j=0;
	while(1)
	{
		(tab[i])=(char*)malloc(10*sizeof(char));
		fscanf(f,"%c",(tab[i]+j));
		j++;
		if(*(tab[i]+j)=='\n')
		{
			i++;
			j=0;
		}
		if(*(tab[i]+j)==EOF)
			break;
	}
				

	return 0;


}

