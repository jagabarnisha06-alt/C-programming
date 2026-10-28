#include<stdio.h>
#include<conio.h>
struct student
{
 char name[20];
 int rollno;
 int marks;
 char city[20];
 char dream[20];
};
struct student s[10];
void read()
{
 int i;
 for(i=0;i<10;i++)
 {
  printf("enter the name:\n");
  scanf("%s",s[i].name);
  printf("enter the rollno:\n");
  scanf("%d", &s[i].rollno);
  printf("enter the marks:\n");
  scanf("%d", &s[i].marks);
  printf("enter the city:\n");
  scanf("%s",s[i].city);
  printf("enter the dream:\n");
  scanf("%s",s[i].dream);
 }
}
void display()
{
 int i;
 printf("\n---------student details------------\n");
 for(i=0;i<10;i++)
 {
  printf("\nstudent %d\n",i+1);
  printf("student name:%s\n",s[i].name);
  printf("student roll:%d\n",s[i].rollno);
  printf("student mark:%d\n",s[i].marks);
  printf("student city:%s\n",s[i].city);
  printf("student dream:%s\n",s[i].dream);
  }
}
int main()
{
 read();
 display();
 return 0;
}
