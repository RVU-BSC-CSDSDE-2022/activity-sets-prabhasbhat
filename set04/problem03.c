#include <stdio.h>


void input_n_and_r(int *n, int *r);
int fact(int n);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
  int n,r,ncr;
  input_n_and_r(&n, &r);
  ncr=nCr(n,r);
  output(n,r,ncr);
  return 0;
}

void input_n_and_r(int *n, int *r)
{
  printf("enter the value of n\n");
  scanf("%d", n);
  printf("Enter the value of r\n");
  scanf("%d", r);
}

int nCr(int n, int r)
{
    int ncr;
    int n_r=(n-r);
    n=fact(n);
    n_r=fact(n_r);
    r=fact(r);
    int num=n;
    int demo=(n_r)*r;
    ncr=(num/demo);
    return ncr;
    
}

int fact(int n)
{
    int fact=1;;
    while(n!=0)
    {
    fact=fact*n;;
    n=n-1;
      }
  return fact;
}


void output(int n, int r, int result)
{
  printf("for n = %d and r = %d, nCr = %d", n,r,result);
}