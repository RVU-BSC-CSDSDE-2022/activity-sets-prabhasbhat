#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
  int num1,den1,num2,den2,res_num,res_den;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &res_num, &res_den);
  output(num1, den1, num2, den2, res_num, res_den);
  return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator of the first number\n");
  scanf("%d", num1);
  printf("Enter the denominator of the first number\n");
  scanf("%d", den1);
  printf("Enter the numerator of the second number\n");
  scanf("%d", num2);
  printf("Enter the denominator of the second number\n");
  scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
   num1=num1*den2;
   num2=num2*den1;
   den1=den2=den1*den2;
   *res_num=num1+num2;
   *res_den=den1;
   
  
}


void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("%d/%d + %d/%d is %d/%d\n", num1,den1,num2,den2,res_num,res_den);
}