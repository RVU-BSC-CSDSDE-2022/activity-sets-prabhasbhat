#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float root);

void main()
{
  float n;
  float root;
  n=input();
  root=square_root(n);
  output(n,root);
  
}
float input()
{
  float n;
  printf("Enter the number n\n");
  scanf("%f",&n);
  return n;
}

float square_root(float n)
{
  float x=n;
  float y=1;
  float e=0.0001;
  while(x-y>e)
    {
      x=(x+y)/2;
      y=n/x;
    }
return x;
}
void output(float n, float root)
{
  printf("Square root of %.3f is %.3f",n,root);
}