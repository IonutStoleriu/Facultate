#include <stdio.h>
int main()
{
	int c,d,b;
	int i=0;
	int ts=0,egal=0, mai_mic=0, mai_mare=0;


	scanf("%d",&b);

	while(1)
	{	

		scanf("%d",&c);
		if(c==0)
			break;
		//printf("%d comparat %d\n",b,c);
		if(b<c)
			mai_mic++;
		else if(b==c)
			egal++;
		else if(b>c)
			mai_mare++;
		
		b=c;
	
	}
	//printf("%d %d %d\n",mai_mic, egal, mai_mare);
	if(egal==0 && mai_mare==0)
		printf("Sir strict crescator \n");
	else if(mai_mare==0 && egal!=0 && mai_mic !=0)
		printf("Sir crescator\n");
	else if(mai_mic==0 && mai_mare==0)
		printf("Sir constant \n");
	else if(mai_mic==0 && egal==0)
		printf("Sir strict descrescator \n");
	else if(mai_mic==0&& egal!=0 && mai_mare !=0)
		printf("Sir descrescator");
	else if(egal!=0, mai_mare !=0, mai_mic !=0)
		printf("Sir oarecare");
return 0;
}
