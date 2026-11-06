#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d>0)
    printf("two real roots");
    else if(d<0)
    printf("no real roots");
    else
    printf("two equal roots");
}