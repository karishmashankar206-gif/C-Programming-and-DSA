#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0||n==1)
    {
    printf("not prime");
    return 0;
    }
    if(n==2||n==3)
    {
        printf("is prime");
        return 0;
    }
    int f=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("is prime");
        return 0;
    }
    
}