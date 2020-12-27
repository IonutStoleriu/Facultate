#include <stdio.h>
int main()
{
	int c,d;
	int a=0,e=0,i=0,o=0,u=0;
	
	printf("Introduceti sirul de caractere:");
	while((c=getchar())!=EOF && c!='\n')
	{
	if(c!='\n')
	{
		if(c=='a' || c=='A')
			a++;
		else if(c=='e' || c=='E')
			e++;
		else if(c=='i' || c=='I')
			i++;
		else if(c=='o' || c=='O')
			o++;
		else if(c=='u' || c=='U')
			u++;
	}
	else
		break;
	}
	printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
	return 0;
}
