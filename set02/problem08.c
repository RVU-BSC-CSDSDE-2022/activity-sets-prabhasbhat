#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
void main()
{
    int n;
    Triangle smallest;
    n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
}
int input_n()
{
    int n;
    printf("Enter the number of triangles\n");
    scanf("%d",&n);
    return n;
}
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=input_triangle();
    }
}
Triangle input_triangle()
{
    Triangle t;
    printf("enter the height of the triangle\n");
    scanf("%f",&t.altitude);
    printf("enter the base of the triangle\n");
    scanf("%f",&t.base);
    return t;
}
void find_area(Triangle *t)
{
    t->area=0.5 * t->base * t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
    int i;

    for(i=0;i<n;i++)
    {
        find_area(&t[i]);  
    }

}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    int i;
    Triangle small={0,0,0};
    small.area=t[0].area;
        for(i=1;i<n;i++)
        {
            if(t[i].area<=small.area)
            {
                small.area=t[i].area;
                small.altitude=t[i].altitude;
                small.base=t[i].base;
                // printf("the area is %f",small.area);
            }
        }
    // printf("the area is %f",small.area);

    return small;

}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("the area of the triangle with base %f, height %f is %f ",smallest.base,smallest.altitude,smallest.area);

}