#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0)
    {
        if(a+b+c==180)
        {
            printf("valid triangle");
            if(a<90&&b<90&&c<90)
            {
                printf("\nacute");
            }
            else if(a==90||b==90||c==90)
            {
                printf("\nright");
            }
            else if(a>90||b>90||c>90)
            {
                printf("\nobtuse");
            }
        }
        else
        {
            printf("invalid triangle");
        }
    }
    else
    {
        printf("invalid triangle");
    }
}