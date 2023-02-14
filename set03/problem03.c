#include <stdio.h>
#include <math.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n, result);
  return 0;
}

int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d", &n);
  return n;
}

int is_prime(int n)
{
  int i=0,count=0;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
        count=1;
        return count;
      }
    }
  return count;
}

void output(int n, int result)
{
  if(result==0)
    printf("The number %d is prime\n", n);
  else
    printf("The number %d is not prime\n", n);
  }