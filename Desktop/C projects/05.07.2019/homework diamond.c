
#include <stdio.h>
void printtriangle(int n)
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

{int shape, n;
printf("Enter the shape=");
scanf("%d",&shape);
if(shape==1)
{
    printf("it is a triangle please enter the size=");
    scanf("%d",&n);

   printtriangle(n);

 }
else
{
    printf("It is not a triangle");
}
}
return 0;
}

