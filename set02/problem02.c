//Write a program to find if a triangle is scalene.A triangle is scalene if all the three sides of the triangle are not equal to one another
#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
void main()
{
     int a,b,c;
     int isscalene;
     a=input_side();
     b=input_side();
     c=input_side();
     isscalene=check_scalene(a,b,c);
     output(a,b,c,isscalene);
     
}
int input_side()
{
     int s;
     printf("Enter the side\n");
     scanf("%d",&s);
     return s;
}
int check_scalene(int a, int b, int c)
{
     int flag=0;
     if((a!=b) && (a!=c) && (b!=c))
     {
          flag=1;
     }
     return flag;
}
void output(int a, int b, int c, int isscalene)
{
     if(isscalene==1)
     {
     printf("The triangle with sides %d , %d and %d is scalene",a,b,c);
     }
     else
     {
     printf("The triangle with sides %d , %d and %d is not scalene",a,b,c);
     }
}