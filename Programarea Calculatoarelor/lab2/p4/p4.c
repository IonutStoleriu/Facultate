#include <stdio.h>
int main()
{	
	int a,b,c,max;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	
	if(a>b)
		max=a;
	else max=b;
	if(max<c)
		max=c;

	printf("max=%d",max);
	

	return 0;
}
