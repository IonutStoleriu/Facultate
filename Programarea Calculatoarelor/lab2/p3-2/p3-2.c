#include <stdio.h>
int main()
{
	int fahr=10;
	int pas;
	int celsius;
	printf("Introduceti pas-ul: ");
	scanf("%d",&pas);
	printf("Fahrenheigt\tCelsius\n");
	for(fahr=10;fahr<=300;fahr+=pas)
	{
		celsius=5/9.0*(fahr-32);
		printf("%d\t\t%d\n",fahr, celsius);
	}
	return 0;
}
