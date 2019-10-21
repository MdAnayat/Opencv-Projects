#include<stdio.h>
#include<conio.h>

int main()
{
int i, j, k,
   char arr[256][256][256]={0};

for(i=0;i<200;i++)
{
    for(j=0;j<100;j++)
    {
        for(k=0;k<100;k++)
        {
        arr[i][j][k] =128;
        printf("%d\t",arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
getch();
}
