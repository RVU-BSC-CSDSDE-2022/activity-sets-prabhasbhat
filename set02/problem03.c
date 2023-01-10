// COmposite numbers.To do this, we need to check to see if the number can be divided by these common factors: 2, 3, 5, 7, 11, and 13.

#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
void main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);

}
int input_number()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    return num;
}
int is_composite(int n)
{
    int result=0,i;
    int count=0;

    for(i=1;i<=n;i++)
    {
        result=n%i;
        if(result==0)
        {
            count=count+1;
        }
    }
    if (count>2)
    {
        result=1;
    }
    return result;
    
}
void output(int n, int result)
{
    if(result==1)
    {
        printf("The number %d is composite\n",n);
    }
    else
    {
        printf("The number %d is not composite\n",n);
    } 
}