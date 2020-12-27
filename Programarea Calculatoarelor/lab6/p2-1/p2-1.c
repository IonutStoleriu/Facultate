#include <stdio.h>
void hexa(unsigned long int a, char s[]);
int main()
{
	printf("Program de conversie decimal to hexadecimal.\n\n");
	char s[100];
	unsigned long int a;
	printf("Introduceti nr:");
	scanf("%ld",&a);
	hexa(a,s);
	return 0;
}

void hexa(unsigned long int a,char s[])
{
	int quotient=a;
	int i,j,temp;
	i=0;
	while(quotient!=0)
	{
			temp=quotient%16;
	if(temp<10)
		temp=temp+'0';
	else
		temp=temp+'A'-10;
	s[i++]=temp;
	quotient=quotient/16;
	}
	s[i++]='x';
	s[i++]='0';
	
	printf("Numarul in hexazecimal este:");
	for(j=i;j>=0;j--)
		printf("%c",s[j]);
	printf("\n");
}

	

