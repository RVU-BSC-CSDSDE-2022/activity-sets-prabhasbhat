#include<stdio.h>
void main()
{
      int n,sum;
      n=input_n();
      sum=sum_n_nos(n);
      output(n,sum);
      printf("Sum is %d",sum);

}
int input_n()
{
      int n;
      printf("Enter the value of n\n");
      scanf("%d",&n);
      return n;
}
int sum_n_nos(int n)
{
      int i,sum=0;
      for(i=1;i<=n;i++)
      {
            sum=sum+i;
      }
      return sum;
}
void output(int n,int sum)
{
printf("The sum of %d natural numbers is %d",n,sum);
}