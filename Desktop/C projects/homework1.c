
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

void printdiamond(int n)
{
 int  p, q, r;
 for(p=0 ;p<=n; p++)
 {
    for(q=0; q<=n-p; q++)
  {
     printf(" ");
  }
      for(r=0; r<=p; r++)
      {
          printf(" *");
      }
      printf("\n");
 }

 for(p=n; p>=0; p--)
 {
    for(q=0; q<=n-p; q++)
  {
     printf(" ");
  }
      for(r=0; r<=p; r++)
      {
          printf(" *");
      }

    printf("\n");
}
}
#define pyramid
void printhalfpyramid( int n)
#ifdef pyramid
{
    int u, v;
    for(u =1; u<=n; u++)
    {
        for(v=1; v<=u; v++)
        {
            printf("*");
        }

            printf("\n");
        }
}
#endif
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
        printdiamond(n);
    }
    else if(shape==3)
    {
        printf("it is a halfpyramid please enter the size=");
        scanf("%d",&n);
        printf("\n");
        printhalfpyramid(n);
    }

    l++;
}

}

