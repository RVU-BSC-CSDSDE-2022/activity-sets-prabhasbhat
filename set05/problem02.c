#include<stdio.h>
#include<math.h>  //use gcc problem02.c -lm
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
void main()
{
    // weight = pi * stomach_radius^3 * sqrt(height * length)
    float radius,height,length;
    input_camel_details(&radius,&height,&length);


    
}
void input_camel_details(float *radius, float *height, float *length)
{
    float weight;
    printf("Enter the radius \n");
    scanf("%f",radius);
    printf("Enter the height\n");
    scanf("%f",height);
    printf("Enter the length\n");
    scanf("%f",length);
    weight=find_weight(*radius,*height,*length);
    output(*radius,*height,*length,weight);

}

float find_weight(float radius, float height, float length)
{
    float weight;
    float pi=3.1415;
    weight=pi* pow(radius,3) * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius:%f, height: %f, length:%f is %f",radius,height,length,weight);
}