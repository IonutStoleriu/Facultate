#include <stdio.h>
#include <stdlib.h>

struct _PUNCT{
	double x,y;
};
typedef struct _PUNCT PUNCT;

struct _CERC{
	PUNCT p1;
	double r;
};
typedef struct _CERC CERC;

struct _DREPTUNGHI{
	PUNCT d1,d2;
};
typedef struct _DREPTUNGHI DREPTUNGHI;

int punct_cerc(PUNCT p, CERC c);
int punct_dreptunghi(PUNCT p, DREPTUNGHI d);

int main()
{
	int a,b,c,d,e,f,g,h,r;
	int p_c, p_d;
	
	printf("Introduceti coordonatele punctului:");
	scanf("%d,%d",&a,&b);
	printf("\n");
	printf("Introduceti coordoatele centrului cercului:");
	scanf("%d,%d",&c,&d);
	printf("Introduceti raza cercului:");
	scanf("%d",&r);
	printf("\n");
	printf("Introduceti coordonate inceput dreptunghi:");
	scanf("%d,%d",&e,&f);
	printf("Introduceti coordonatele sfarsit dreptung:");
	scanf("%d,%d",&g,&h);
	

	PUNCT p1={a,b};
	CERC c1={{c,d},r};
	DREPTUNGHI d1={{e,f},{g,h}};
	p_c=punct_cerc(p1,c1);
	p_d=punct_dreptunghi(p1,d1);
	if(p_c==1)
		printf("Punctul apartine cercului\n");
	else
		printf("Punctul nu apartine cercului\n");
	if(p_d==1)
		printf("Punctul apartine dreptunghiului\n");
	else
		printf("Punctul nu apartine dreptunghiului\n");
	return 0;
}

int punct_cerc(PUNCT p, CERC c)
{	
	if ((abs(p.x-c.p1.x)<c.r) && (abs(p.y-c.p1.y)<c.r))
		return 1;
	else
		return 0;
}
int punct_dreptunghi(PUNCT p, DREPTUNGHI d)
{
	if( (p.x >= d.d1.x) && (p.y <= d.d1.y) && (p.x <= d.d2.x) && (p.x >=d.d2.y))
			return 1;
	else
		return 0;
}

