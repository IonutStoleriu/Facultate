#include <stdio.h>
struct TIMP{
	int h,m,s;
};
struct TIMP suma(struct TIMP t1,struct TIMP t2);
struct TIMP diferenta(struct TIMP t1, struct TIMP t2);
int main()
{
	struct TIMP t1,t2,t3,t4;
	printf("Angajatul vine la munca la ora:");
	scanf("%d:%d:%d",&t1.h,&t1.m,&t1.s);
	printf("Lucreaza pana la ora:");
	scanf("%d:%d:%d",&t2.h,&t2.m,&t2.s);
	t1=diferenta(t2,t1);
	
	printf("Pleaca apoi la masa si revine la ora:");
	scanf("%d:%d:%d",&t3.h,&t3.m,&t3.s);
	printf("Si mai lucreaza pana la ora:");
	scanf("%d:%d:%d",&t4.h,&t4.m,&t4.s);
	t3=diferenta(t4,t3);

	t1=suma(t1,t3);

	printf("Angajatul lucreaza in total %d ore, %d minute si %d secunde",t1.h,t1.m,t1.s);	


	return 0;
}
struct TIMP suma(struct TIMP t1,struct TIMP t2)
{
	t1.s=t1.s+t2.s;
	if(t1.s>60)
	{
		t1.s=t1.s-60;
		t1.m++;
	}
	t1.m=t1.m+t2.m;
	if(t1.m>60)
	{
		t1.m=t1.m-60;
		t1.h++;
	}
	t1.h=t1.h+t2.h;
	return t1;
}
struct TIMP diferenta(struct TIMP t1,struct TIMP t2)
{
	t1.s=t1.s-t2.s;
	if(t1.s<0)
	{
		t1.s=60+t1.s;
		t1.m--;
	}
	t1.m=t1.m+t2.m;
	if(t1.m<0)
	{
		t1.m=60+t1.m;
		t1.h--;
	}
	t1.h=t1.h-t2.h;
	return t1;
}

	

