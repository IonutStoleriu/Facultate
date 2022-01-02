//Fractii
#include <stdio.h>
int cmmdc(int a, int b);
int main()
{
    int n=10,i=1,j=1,total=0;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cmmdc(i,j)==1 && cmmdc(j,i)==1)
                    total+=1;
                    
            }
            j=1;
        }
    printf("Numarul de fractii ireductibile este=%d",total);

    return 0;
}
int cmmdc(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

//===================================================================
Biti incomplet
#include <stdio.h>
void dec2bin(int n);
int main()
{
    int i;
    for(i=1;i<8;i++)
    {
    dec2bin(i);
    }
    return 0;
}
void dec2bin(int n)
{
    int yes=1;
    int c=3;
    int val[c];
    int output[20];
    int i,j;
    for(i=0;i<20;i++)
    {
        output[i]=0;
    }
    while(n>0)
    {
        for(i=c-1;i>=0;i--)
        {
            val[i]=n%2;
            n=n/2;
        }
                
    }
    
    
    
    for(i=0;i<c;i++)
    {
        printf("%d",val[i]);
    }
    printf("\n");
}
//=================================================================
