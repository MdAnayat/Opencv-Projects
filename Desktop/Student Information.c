#include<stdio.h>
struct student
{
      int roll_number;
      char name[20];
      int age;
      char college_name[40];

};
int main()
{
struct student s[1];
int i;
FILE *fptr;
fptr = fopen("C:\\output\\student.bin","w");

for(i=0;i<1;i++)
{
printf("ENTER ROLL NUMBER: ");
scanf("%d",&s[i].roll_number);
fwrite (&s[i].roll_number, sizeof(struct student), 1, fptr);

printf("ENTER STUDENT NAME: ");
scanf("%s",s[i].name);
fwrite (s[i].name, sizeof(struct student), 1, fptr);

printf("ENTER AGE: ");
scanf("%d",&s[i].age);
fwrite (&s[i].age, sizeof(struct student), 1, fptr);

printf("ENTER COLLEGE NAME: ");
scanf("%s",s[i].college_name);
fwrite (s[i].college_name, sizeof(struct student), 1, fptr);
fclose(fptr);
}
}

/*printf("STUDENT INFORMATION\n");
//printf("\n\tSTUDENT_NAME\tROLL_NUMBER\tSTUDENT_AGE\tCOLLEGE_NAME");
printf("\n\tSTUDENT_NAME\tROLL_NUMBER\tSTUDENT_AGE\tCOLLEGE_NAME");
printf("\n\t\n");

for(i=0;i<5;i++)
{

printf("\n\t%s\t\t%d\t\t%d\t\t%s\n",s[i].name,s[i].roll_number,s[i].age,s[i].college_name);

}



}*/
