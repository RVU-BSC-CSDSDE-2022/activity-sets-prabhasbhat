//sum of n natural nums
#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
void main()
{
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
}
int input_n()
{
    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int i,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of %d natural numbers is %d",n,sum);
}

