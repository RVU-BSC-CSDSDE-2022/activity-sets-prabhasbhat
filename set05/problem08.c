//weight of n camels 
//`total_truck_weight = truck_weight + weight_of_camels`
//`weight = pi * stomach_radius^3 * sqrt(height * length)`
//weight=pi * pow(c.radius,3) * sqrt(c.height * c.length);
#include<stdio.h>
#include<math.h>
typedef struct _camel {
    float radius, height, length, weight;
} Camel;
int input_n();
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
void main()
{
    int n;
    n=input_n();
    Camel c[n];
    float truck_weight,total_weight;
    input(n,c,&truck_weight); 
    find_camel_weight(n,c);
    total_weight=compute_total_weight(n,c,truck_weight);
    output(total_weight);
}
int input_n()
{
    int n;
    printf("Enter the number of camels:\n");
    scanf("%d",&n);
    return n;
}
void input(int n, Camel c[n], float *truck_weight)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the height of camel no. %d:",i);
        scanf("%f",&c[i].height);
        printf("Enter the length of camel no. %d:",i);
        scanf("%f",&c[i].length);
        printf("Enter the radius of camel no. %d:",i);
        scanf("%f",&c[i].radius);
    }
    printf("Enter the weight of the truck\n");
    scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n])
{
    int i;
    float pi=3.1415;
    for(i=0;i<n;i++)
    {
        c[i].weight=pi * pow(c[i].radius,3) * sqrt(c->height*c->length);
    }
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float weight_n=0;
    float total_weight;
    int i;
    for(i=0;i<n;i++)
    {
        weight_n=weight_n+c[i].weight;
    }
    total_weight=truck_weight+weight_n;
    return total_weight;
}
void output(float total_weight)
{
    printf("The Total weight of the truck is:%f",total_weight);
}