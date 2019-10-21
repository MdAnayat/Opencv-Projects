#include <stdio.h>
void printtriangle( int n)
{
int i, j, m ;
printf("Enter number of rows: ");
for(i =0; i<=n; i++)
{
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for (m=1;m<=(2*i-1);m++)
    {
        printf("*");
    }
    printf("\n");
}
}
int main()
{
   printtriangle(6);
   return 0;
 }

