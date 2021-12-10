#include<stdio.h>
int input_n();
int sum_n(int n);
int output(int n,int add);
int main()
{
  int a,add;
  a=input_n;
  add=sum_n(a);
  output(a,add);
  return 0;
}
int input_n()
{
  int i;
  printtf("enter a number");
  scanf("%d",&i);
  return i;
}
int sum_n(int n)
{
  int s=0,i;
  for(i=0;i<=n;i++)
  {
    s=s+i;
  }
  return s;
}
void output(int )
{
  printf("the sum of the first %d number is %d",n,sum);
}