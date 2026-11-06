#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
    print(n);
    
}