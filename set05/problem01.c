//d=√((x2 – x1)² + (y2 – y1)²)
#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
void main()
{
  Point a,b;
  float res;
  a=input();
  b=input();
  dist(a,b,&res);
  output(a,b,res);

}
Point input()
{
  Point point;
  printf("Enter the coordinates of the point\n");
  printf("Enter the x coordinate\n");
  scanf("%f",&point.x);
  printf("Enter the y coordinate\n");
  scanf("%f",&point.y);
  return point;
}
void dist(Point a, Point b, float *res)
{
  *res=sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));   //weight=pi* pow(radius,3) * sqrt(height * length);
}
void output(Point a, Point b, float res)
{
  printf("The distance bewteen the points (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}