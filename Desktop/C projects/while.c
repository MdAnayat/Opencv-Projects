
#include <stdio.h>
void printtriangle( int n)
{
    int i, j, m ;
    printf("Enter number of rows: ");
    for(i =0; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for (m=1; m<=(2*i-1); m++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*#include<stdio.h>
int main()
{
 int  i, j, m;
 for(i=0 ;i<=7; i++)
 {
    for(j=0; j<=7-i; j++)
  {
     printf(" ");
  }
      for(m=0; m<=i; m++)
      {
          printf(" *");
      }
      printf("\n");
 }
 for(i=7; i>=0; i--)
 {
    for(j=0; j<=7-i; j++)
  {
     printf(" ");
  }
      for(m=0; m<=i; m++)
      {
          printf(" *");
      }

    printf("\n");
}
  return 0;
}*/

int main()
{
    int l=0,shape,n;
    while(l<=4)
    {
     printf("Enter the shape=");
     scanf("%d",&shape);
     if(shape==1)
    {
        printf("it is a triangle please enter the size=");
        scanf("%d",&n);

        printtriangle(n);

    }
    else if(shape==2)
    {
        printf("it is a diamond please enter the size=");
        scanf("%d",&n);
        printf("\n");
        printtriangle(n);
    }
    l++;
}

}

