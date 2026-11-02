#include<stdio.h>
#include<stdlib.h>
int main()
{
 char ch;
 FILE*fp;
 fp=fopen("data.txt","w");
 fprintf(fp,"the c program staff is teaching well\n""our classroom is always have fun\n""all the staff members are friendly\n""i really get some amazing friends out there\n""the lectures taught by the teachers are always engaging\n");
 fclose(fp);
 fp=fopen("data.txt","r");
 while((ch=fgetc(fp))!=EOF)
 {
  printf("%c",ch);
 }
 fclose(fp);
 fp=fopen("data.txt","a");
 fprintf(fp,"our c program sir is very kind to teach\n""he clear our doubts immediately\n""c programmimg laguage is quiet challenging\n""But it is intresting to solve problems\n""i hope i will get goog marks in sem\n");
 fclose(fp);
 return 0;
}