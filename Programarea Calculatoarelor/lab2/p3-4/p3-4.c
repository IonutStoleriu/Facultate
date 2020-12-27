#include <stdio.h>
#include <math.h>
int main()
{
	int s;
	int p;
	printf("Introduceti sirul:");
	while(1)
	{
		scanf("%d -> ",&s);
		printf("%d ",s);
		if(s==0)
			break;
		p=floor(sqrt(s));
		printf("%d \n",p);
	}
return 0;
}
		

