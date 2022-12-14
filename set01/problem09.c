#include<stdio.h>
float square_root(float n);

void main()
{
  int n;
  float root;
  printf("enter the number\n");
  scanf("%d",&n);
  root=square_root(n);
  printf("Square root of %d is %f",n,root);
  
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