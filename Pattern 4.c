
#include<stdio.h>
int main()
{
    int i , j, n=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            n++;
            printf("%d" , n);
        }
    printf("\n");
    }
    return 0;
}

