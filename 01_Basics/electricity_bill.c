#include<stdio.h>
int main()
{
    int u;
    float eb;
    scanf("%d",&u);
    if(u>=0 && u<=100)
    {
        eb=u*1.5;
    }
    else if(u>100 && u<=200)
    {
        eb=100*1.5+(u-100)*2.5;
    }
    else if(u>200)
    {
        eb=100*1.5+100*2.5+(u-200)*4;
    }
    else
    {
        printf("Invalid units");
        return 0;
    }
    printf("%.2f",eb);
}
