#fractii
#include <iostream>
using namespace std;
int cmmdc(int a, int b);
int main()
{
    int c, total=0;
    int n=4;
    int j=1;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(cmmdc(i,j)==1 && cmmdc(j,i)==1)
                    total+=1;
            }
        j=1;
    }
    cout<<"Numarul total de fractii ireductibile pentru n= "<<n<<"este "<<total;
}
int cmmdc(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

===============================================
