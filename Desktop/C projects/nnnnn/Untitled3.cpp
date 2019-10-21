#include <stdio.h>
int main()
{
int i,j,m,n=10;
printf("Enter number of rows: ");
for(i =1; i<=n; i++)
{
    for(j=1;J<=n-i;j++)
    {
        printf(" ");
    }
    for (m=1;m<=(2*i-1);m++)
    {
        printf(" *");
    }
    printf("\n");
}
 return 0;
}

