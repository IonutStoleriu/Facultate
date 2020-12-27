#include <stdio.h>
int main()
{
	int a,b;
	printf("Introduceti doua numere intregi pozitive");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	int temp;
	
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("cmmdc=%d",a);
	return 0;
}


