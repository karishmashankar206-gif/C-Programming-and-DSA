#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int res=0;
    int ld;
    if(n<=0)
    {
    printf("not Armstrong number");
    return 0;
    }
    int d=0;
    while(n>0)
    {
        n/=10;
        d++;
    }
    int r=temp;
    while(temp>0)
    {
        int p=1;
       ld=temp%10;
       for(int i=0;i<d;i++)
       {
           p*=ld;
       }
       temp/=10;
       res+=p;
    }
    if(res==r)
    {
        printf("is Armstrong number");
    }
    else
    {
        printf("not Armstrong number");
    }
}