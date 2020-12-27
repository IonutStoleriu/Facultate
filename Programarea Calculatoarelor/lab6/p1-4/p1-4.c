#include <stdio.h>
int main()
{
	int c,l=0;
	printf("Introduceti secventa:");
	while((c=getchar())!=EOF)
	{	
		if(c!=' ' && c!='\n')
			l++;
		
		else if(c==' ')
		{
			printf("%d ",l);
			l=0;
		}
		else if(c=='\n')
		{
			printf("%d.",l);
			break;
		}

	}
	return 0;
}
