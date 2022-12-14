#include<stdio.h>
int main(void)
{
  int n,i,sum=0;
  int a[n];
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the numbers\n");
  for (int i=0;i<n;i++)
    {
    scanf("%d",&a[n]);
    sum=sum+a[n];
    }
printf("The sum of the numbers is %d",sum);
}