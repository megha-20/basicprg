#include<stdio.h>
#include<math.h>

float input()
{
 float a;
 printf("enter the co-ordinate points\n");
 scanf("%f",&a);
 return a;
}

float dist_points(float x1,float x2,float y1,float y2)
{
  return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1,float x2,float y1,float y2,float d)
{
  printf("the distance between points %f%f and %f%f is %f",x1,y1,x2,y2,d);
}

int main()
{
 float x1,x2,y1,y2,d;
 x1=input();
 x2=input();
 y1=input();
 y2=input();
 d=output(x1,x2,y1,y2);
 return 0;
}
