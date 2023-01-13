// Camel is:
//  - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.
#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
void main()
{
    float radius,height,length;
    int mood;
    input_camel_details(&radius,&height,&length);
    mood=find_mood(radius,height,length);
    output(radius,height,length,mood);

}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius\n");
    scanf("%f",radius);
    printf("Enter the height\n");
    scanf("%f",height);
    printf("Enter the length\n");
    scanf("%f",length);
}
int find_mood(float radius, float height, float length)
{
    if((radius<height) && (radius<length))
    {
        return 1;
    }
    else if((height<length)&&(height<radius))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
void output(float radius, float height, float length, int mood)
{
    if(mood==1)
    {
        printf("The camel is sick\n");
    }
    else if(mood==2)
    {
        printf("The camel is happy\n");
    }
    else if(mood==3)
    {
        printf("The camel is tense\n");
    }
}
