#include <stdio.h>
int main()
{
	int a,b,max;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	int *pa, *pb;
	pa=&a;
	pb=&b;

	a=*pa;
	b=*pb;

	if(a>b)
		max=a;
	else
		max=b;
	printf("Maximul dintre a si b este %d",max);



	return 0;
}
