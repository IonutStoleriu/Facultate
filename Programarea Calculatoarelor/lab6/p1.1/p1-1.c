#include <stdio.h>
int nr_aparitii(char a);
int main()
{
	char a;
	printf("Introduceti caracterul pe care doriti sa-l numarati:");
	scanf("%c",&a);
	printf("Introduceti sirul:");
	int nr=nr_aparitii(a);
	printf("Numarul de aparitii a lui %c este de %d ori",a,nr);
	return 0;
}
int nr_aparitii(char a)
{
	int c,i=0;
	while ((c=getchar())!=EOF)
	{
		if(c==a)
			i++;
	}
	return i;
}	
