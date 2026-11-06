#include<stdio.h>
int gcd(int a,int b)
{
    int min;
    if(a<b)
    min=a;
    else
    min=b;
    for(int i=min;i>=1;i--)
{
    if(a%i==0 && b%i==0)
    {
        return i;
        break;
    }
}
}
int lcm(int a,int b)
{
    int max = (a>b) ? a : b;

for(int i=max;;i++)
{
    if(i%a==0 && i%b==0)
    {
        return i;
        break;
    }
}
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res_gcd=gcd(a,b);
      int res_lcm=lcm(a,b);
    printf("%d %d",res_gcd,res_lcm);

}