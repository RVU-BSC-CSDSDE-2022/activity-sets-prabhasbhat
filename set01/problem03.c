//add 2 numbers by pass by value

#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
void main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
}
int input()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    return num;
}
int add(int a,int b)
{   
    int sum;
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d and %d is %d\n",a,b,sum);

}

