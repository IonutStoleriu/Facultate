#include <stdio.h>
#include <stdlib.h>
int toUpper(int c);
int toLower(int c);
int main()
{
	int choice;
	int c;
	printf("1.toUpper\n");
	printf("2.toLower\n");
	printf("3.Exit\n");
	
	while(1)
	{
	printf("\nOptiunea ta:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("Introduceti sirul:");
		scanf("%d",&c);
		printf("Sirul modificat:");
		while((c=getchar())!=EOF && c!='\n')
		putchar(toUpper(c));
		printf("\n");
	break;
	case 2:
		printf("Introduceti sirul:");
		scanf("%d",&c);
		printf("Sirul modificat:");
		while((c=getchar())!=EOF && c!='\n')
		putchar(toLower(c));
		printf("\n");
	break;

	case 3:
		printf("Ai iesit din program.\n");
		exit(EXIT_SUCCESS);
		break;
	break;

	default:
	printf("Optiune invalida\n");
	}
	}
	return 0;
}
int toUpper(int c)
{
	return c>='a' && c<='z' ? c-('a'-'A') : c;
}
int toLower(int c)
{
	return c>='A' && c<='Z' ? c+'a'-'A' : c;
}

