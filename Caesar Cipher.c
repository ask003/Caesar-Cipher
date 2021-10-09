
#include <stdio.h>
int main()
{
    int n,dig,i=0,j;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    int a[10];
    while(n>0)
    {
       dig = n%10;
       a[i] = dig + 1;
       i++;
       n = n/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }

    return 0;
}