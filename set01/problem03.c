#include<stdio.h>
int main(void)
{
  int sum,a,b;
  a=input();
  b=input();
  sum=sum_func(a,b);
  void output(int a, int b, int sum);
  printf("The sum of %d and %d is %d",a,b,sum);
  return(0);
}
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a); 
  return a;
}
sum_func(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
void output(int a, int b, int sum)
{
   printf("The sum of %d and %d is %d",a,b,sum); 
}
