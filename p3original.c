#include<stdio.h>
void input(int *a,int *b);
void add(int *a,int *b,int *sum);
void output(int *a,int *b,int *sum);
int main()
{
  int A,B,sum;
  input(&A,&B);
  add(&A,&B,&sum);
  output(&A,&B,&sum);
  return 0;
}
void input(int *a,int *b)
{
  scanf("%d",a);
  scanf("%d",b);
}
void add(int *a,int *b,int *sum)
{
  *sum=*a+*b;
}
void output(int *a,int *b,int *sum)
{
  printf("sum of %d+%d is %d",*a,*b,*sum);
}