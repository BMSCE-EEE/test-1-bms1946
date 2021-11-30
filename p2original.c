#include<stdio.h>
float sum(float x,float y);
float input();
void output(float add);
int main()
{
  float a,b,sum;
  a=inmput();
  b=input();
  sum=sum(a,b);
  output(sum);
  return 0;
  }
  float input()
  {
    float A;
    printf("enter a number:\n");
    scanf("%f",&A);
    return A;
  }
  float sum
