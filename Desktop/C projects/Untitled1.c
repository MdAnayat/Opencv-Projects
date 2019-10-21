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
 FILE *fptr;
 fptr =fopen("C:\\rrrr.rec","w");
 struct student s[1];
 int i;

for(i=0;i<1;i++)
{
printf("ENTER ROLL NUMBER: ");
scanf("%d",&s[i].roll_number);
//gets(s[i].roll_number);
//fprintf(fptr, "Roll_number=%s\n" ,s[i].roll_number);

printf("ENTER STUDENT NAME: ");
scanf("%s",s[i].name);
gets(s[i].name);
//fprintf(fptr, "Name =%s\n",s[i].name);

printf("ENTER AGE: ");
scanf("%d",&s[i].age);
gets(s[i].age);
//fprintf(fptr, "Age =%s\n",s[i].age);

printf("ENTER COLLEGE NAME: ");
scanf("%s",s[i].college_name);
gets(s[i].college_name);

//fprintf(fptr, "Name =%s\n",s[i].college_name);
}

printf("STUDENT INFORMATION\n");
//printf("\n\tSTUDENT_NAME\tROLL_NUMBER\tSTUDENT_AGE\tCOLLEGE_NAME");
printf("\n\tSTUDENT_NAME\tROLL_NUMBER\tSTUDENT_AGE\tCOLLEGE_NAME");
printf("\n\t\n");

for(i=0;i<1;i++)
{

fprintf(fptr,"\n\t%s\t\t%d\t\t%d\t\t%s\n",s[i].name,s[i].roll_number,s[i].age,s[i].college_name);

}
fclose(fptr);


}
