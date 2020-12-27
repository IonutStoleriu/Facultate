#include <stdio.h>
int main()
{
	int h0,h1,m0,m1,s0,s1,rh,rm,rs;
	printf("Introduceti momentul conectarii\n");
	scanf("%d:%d:%d",&h0,&m0,&s0);
	printf("Introduceti momentul deconectarii\n");
	scanf("%d:%d:%d",&h1,&m1,&s1);

	
	if(s1<s0)
	{
		rs=60-s0+s1;
		m1--;
	}
	else
		rs=s1-s0;
	
	if(m1<m0)
	{
		rm=60-m0+m1;
		h1--;
	}
	else
		rm=m1-m0;
	if(h1<=h0)
	{
		rh=24-h0+h1;
	}
	else
		rh=h1-h0;

	printf(" Durata este de: %d ore %d minute %d secunde",rh,rm,rs);
	

	return 0;
}
