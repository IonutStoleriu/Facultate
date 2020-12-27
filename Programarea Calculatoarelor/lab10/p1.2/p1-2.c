#include <stdio.h>
int main()
{
	int a,b,sum=0;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d",&b);

	int *pa,*pb;
	pa=&a;
	pb=&b;
	
	a=*pa;
	b=*pb;

	

	sum=a+b;
	
	printf("Suma este:%d\n",sum);


	return 0;




}
