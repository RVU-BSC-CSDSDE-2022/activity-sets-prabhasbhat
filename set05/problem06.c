//find the average of all the odd elements in an array
#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
void main()
{
    int n;
    float avg;
    n=input_n();
    int a[n];
    input(n,a);
    avg=odd_average(n,a);
    output(avg);

}
int input_n()
{
    int num;
    printf("Enter the size of array\n");
    scanf("%d",&num);
    return num;
}
void input(int n, int a[n])
{
    int i;
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
}
float odd_average(int n, int a[n])
{
    float sum=0,count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
            count=count+1;
        }
    }
    return sum/count;
}
void output(float avg)
{
    printf("Average of all the odd elements is: %f",avg);
}