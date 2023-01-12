//weight of the camel given height, length and stomach radius using four functions *(Structures)*
//> `weight = pi * stomach_radius^3 * sqrt(height * length)`
//use gcc problem03.c -lm
#include<stdio.h>
#include<math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
// void find_weight(Camel *c); //passing address variable

void output(Camel c);
void main()
{
    Camel c;
    c=input();
    c.weight=find_weight(c);
    output(c);

}
Camel input()
{
    Camel c;
    printf("Enter the radius\n");
    scanf("%f",&c.radius);
    printf("Enter the height\n");
    scanf("%f",&c.height);
    printf("Enter the length\n");
    scanf("%f",&c.length);
    return c;
}
float find_weight(Camel c)
{
    float weight;
    float pi=3.1415;
    weight=pi * pow(c.radius,3) * sqrt(c.height * c.length);
    return weight;
}
void output(Camel c)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",c.radius,c.height,c.length,c.weight);
}
