//compare 3 nums and print largest
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
void main()
{   
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);

}
int input()
{   
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    return num;
}
int compare(int a, int b, int c)
{
    int large;
    if((a>=b)&(a>=c))
    {
        large=a;
    }
    else if ((b>=a)&(b>=c))
    {
        large=b;
    }
    else
    {
        large=c;
    }
    return large;
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,largest);
}
