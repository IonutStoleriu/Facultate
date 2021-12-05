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
