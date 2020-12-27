#include <stdio.h>
int main()
{
	int x,y;
	printf("Introduceti coordonatele\n");
	printf("x=");
	scanf("%d",&x);
	printf("\ny=");
	scanf("%d",&y);

	if(x==0 && y==0)
		printf("Punctul se afla in origine");
	else if(x==0 && y>0)
		printf("Punctul se afla pe semiaxa 1-4");
	else if(x==0 && x<0)
		printf("Punctul se afla pe semiaxa 3-4");
	else if(x<0&&y==0)
		printf("Punctul se afla pe semiaxa 2-3");
	else if(x>0&&y==0)
		printf("Punctul se afla pe semiaxa 1-2");
	else if(x>0&&y>0)
		printf("Punctul se afla in cadranul I");
	else if(x<0&&y>0)
		printf("Punctul se afla in cadranul II");
	else if(x<0 && y<0)
		printf("Punctul se afla in cadranul III");
	else if(x>0&&y<0)
		printf("Punctul se afla in cadranul IV");
	return 0;
}
