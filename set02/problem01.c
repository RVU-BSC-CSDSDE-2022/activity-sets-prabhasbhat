#include<stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
void main()
{
     float base,height;
     input(base,height);
     

}
void input(float base, float height)
{
     float area;
     printf("Enter the base of the triangle\n");
     scanf("%f",&base);
     printf("Enter the height of the triangle\n");
     scanf("%f",&height);
     find_area(base,height,&area);
     output(base,height,area);
}
void find_area(float base , float height, float *area)
{
     *area= 0.5 * base * height;

}
void output(float base, float height, float area)
{
     printf("The area of the triangle with base %.2f and height %.2f is %.2f",base,height,area);
}
