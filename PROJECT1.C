#include<stdio.h>
int main()
{
 int a;
 int b;
 char cal;
 printf("enter the value for a:\n");
 scanf("%d",&a);
 printf("enter the operator:\n");
 scanf(" %c",&cal);
 printf("enter the value for b:\n");
 scanf("%d",&b);
 switch(cal)
 {
  case '+':
  {
  printf("result=%d",a+b);
  break;
  }
  case '-':
  {
  printf("result=%d",a-b);
  break;
  }
  case '*':
  {
  printf("result=%d",a*b);
  break;
  }
  case '/':
  {
  printf("result=%d",a/b);
  break;
  }
  default:
  {
  printf("invalid operator");
  }
 }
  return 0;
 }

