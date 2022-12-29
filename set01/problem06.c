int input();
void compare(int a, int b, int c, int *large);
void output(int a, int b, int c, int large);

#include<stdio.h>
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
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    return a;
}
void compare(int a, int b, int c,int *largest)
{
    if ((a>=b)&(a>=c))
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
void output(int a, int b, int c, int large)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,large);
}