#include <stdio.h>
int main()
{
	int s0,m0,h0,ds0,dm0,dh0,s1,m1,h1;
	printf("Introduceti momentul inceperii conexiunii:\n");
	scanf("%d:%d:%d",&h0,&m0,&s0);
	printf("Introduceti durata conexiunii:\n");
	scanf("%d:%d:%d",&dh0,&dm0,&ds0);

	s1=s0+ds0;
	if(s1>60)
	{
		dm0++;
		s1=s1-60;
	}
	m1=m0+dm0;
	if(m1>60)
	{
		dh0++;
		m1=m1=60;
	}
	h1=dh0+h0;
	if(h1>24)
	{
		h1=h1-24;
	}
	printf("Ora deconectarii este de %d:%d:%d secunde",h1,m1,s1);
	return 0;
}
