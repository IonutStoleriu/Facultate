#include <stdio.h>
#include <stdlib.h>

struct _FRACTIE{

	int a,b;
};
typedef struct _FRACTIE FRACTIE;
void inversaFractie(FRACTIE f1);
void adunare(FRACTIE f1, FRACTIE f2);
void inmultire(FRACTIE f1, FRACTIE f2);
void diferenta(FRACTIE f1, FRACTIE f2);
void impartire(FRACTIE f1, FRACTIE f2);
int cmmdc(int a, int b);
int main()
{
	printf("1. Adunare\n");
	printf("2. Scadere\n");
	printf("3. Inmultire\n");
	printf("4. Impartire\n");
	printf("5. Iesire\n");

	int a,b;
	int choice;
	printf("Optiune:");
	scanf("%d",&choice);

	printf("Introduceti prima fractie:");
	scanf("%d/%d",&a,&b);
	FRACTIE f1={a,b};
	printf("Introduceti a doua fractie:");
	scanf("%d/%d",&a,&b);
	FRACTIE f2={a,b};

	switch(choice)
	{

	case 1:
	printf("%d/%d+%d/%d=",f1.a,f1.b,f2.a,f2.b);
	adunare(f1,f2);
	break;

	case 2:
	printf("%d/%d-%d/%d=",f1.a,f1.b,f2.a,f2.b);
	diferenta(f1,f2);
	break;
	
	case 3:
	printf("%d/%d-%d/%d=",f1.a,f1.b,f2.a,f2.b);
	inmultire(f1,f2);
	break;

	case 4:
	printf("%d/%d / %d/%d=",f1.a,f1.b,f2.a,f2.b);
	impartire(f1,f2);
	break;

	case 5:
		exit(EXIT_SUCCESS);
	break;
	
	default:
		printf("Optiune invalida!");
	
	}
	return 0;
}
void inversaFractie(FRACTIE f1)
{
	int aux;
	aux=f1.a;
	f1.a=f1.b;
	f1.b=aux;
}
int cmmdc(int a, int b)
{
	int x;
	while (a!=b)
	{
		x=abs(a-b);
		a=b;
		b=x;
	}
	return b;
}
void adunare(FRACTIE f1, FRACTIE f2)
{
	int c;
	f1.a=f1.a*f2.b;
	f2.a=f2.a*f1.b;
	f1.a=f1.a+f2.a;
	f1.b=f1.b*f2.b;
	c=cmmdc(f1.a,f1.b);
	f1.a=f1.a/c;
	f1.b=f1.b/c;
	printf("%d/%d\n",f1.a,f1.b);
}
void inmultire(FRACTIE f1, FRACTIE f2)
{
	int c;
	f1.a=f1.a*f2.a;
	f1.b=f1.b*f2.b;
	c=cmmdc(f1.a,f1.b);
	f1.a=f1.a/c;
	f1.b=f1.b/c;
	printf("%d/%d\n",f1.a,f1.b);
}
void diferenta(FRACTIE f1, FRACTIE f2)
{
	int c;
	f1.a=f1.a*f2.b;
	f2.a=f2.a*f1.b;
	f1.b=f1.b*f2.b;
	f1.a=f1.a-f2.a;
	c=cmmdc(f1.a,f1.b);
	f1.a=f1.a/c;
	f1.b=f1.b/c;
	printf("%d/%d\n",f1.a,f1.b);
}
void impartire(FRACTIE f1, FRACTIE f2)
{
	int aux;
	aux=f2.a;
	f2.a=f2.b;
	f2.b=aux;
	inmultire(f1,f2);
}
