#include<stdio.h>
int input();
int input(int a,int b,int c);
void output(int larg);
int main()
{
  int a,b,c,larg;
  a=input();
  b=input();
  c=input();
  larg=largest(a,b,c);
  output(larg)
  return 0;
}
int largest(int a,int b,int c)
{
  if (a>b && a>c)
  return a;
  if (b>a && b>c)
  return b;
  else
  return c;
}
void output(int larg)
{
  printf("the largest number is %d")
}
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  return a;  
}

