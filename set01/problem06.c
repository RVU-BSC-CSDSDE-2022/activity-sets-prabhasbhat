//compare 3 nums using pass by reference
#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
void main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);

}
int input()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    return num;
}
void compare(int a, int b, int c, int *largest)
{
    if((a>=b)&(a>=c))
    {
        *largest=a;
    }
    else if((b>=a)&(b>=c))
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,largest);
}