#include <stdio.h>
int main()
{
	int c;
	int litera=0, cifra=0,propozitie=0,alineat=0,cuvant=0,caractere=0, separatori=0;
	double pr_litera, pr_cifra;
	printf("Introduceti textul:\n");	
	while((c=getchar())!=EOF)
	{
		if(c>='a' && c<='z' || c>='A' && c<= 'Z')
			litera++;
		else if(c>='0' && c<='9')
			cifra++;
		else if(c=='.')
			propozitie++;
		else if(c=='\t')
			alineat++;
		 if(c==' ' || c=='.' || c==',' || c==':' || c==';' || c=='-' || c=='\t' || c=='\n')
			cuvant++;
		 if(c=='('|| c==')' || c=='{' || c=='}' || c=='[' || c==']' || c=='#' || c==';' || c=='\t' || c==' ' || c==':')
			separatori++;

	caractere++;	 

	}
	pr_litera=(double)litera/(double)caractere*100;
	pr_cifra=(double)cifra/(double)caractere*100;


	printf("\nNumarul de litere este:%d\n",litera);
	printf("Numarul de cifre este:%d\n",cifra);
	printf("Numarul de propozitii este:%d\n",propozitie);
	printf("Numarul de alineate este:%d\n",alineat);
	printf("Numarul de cuvinte este:%d\n",cuvant-1);
	printf("Numarul de separatori este:%d\n",separatori);
	printf("Numarul de caractere este:%d\n",caractere);
	printf("\n");
	printf("Literele sunt %.2lf\%% din numarul de caractere\n",pr_litera);
	printf("Cifrele sunt %.2lf\%% din numarul de caractere\n",pr_cifra);  


	return 0;
}
