#include<stdio.h>
float add(float x,float y);
float input();
void output(float add);
int main()
{
  float a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(sum);
  return 0;
}
float input()
{
  float A;
  printf("enter anumber\n");
  scanf("%f",&A);
  return A;
}
float add(float x,float y)
{
  float s;
  s=x+y;
  return s;
}
void output(float sum)
{
  printf("the sum of the two number :%0.2f",sum);
}