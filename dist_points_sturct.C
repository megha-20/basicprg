#include<stdio.h>
struct point
{
 float x;
 float y;
}
struct point input()
{
 printf("enter the x and y co-ordinates\n");
 scanf("%f%f",&x,&y);
}

float dist_ponit(structpoint p1,structpoint p2)
{
 float r;
 r=sqrt((p1.x-p1.y)*(p1.x-p1.y)+(p2.x-p2.y)*(p2.x-p2.y));
 return r;
}

float output(structpoint p1,structpoint p2,float r)
{
 printf("the distance between %f%f and %f%f is %f",p1.x,p1.y,p2.x,p2.y);
}

void main()
{
 float r;
 structpoint p1,p2;
 structpoint p1=input()
 structpoint p2=input()
 r=dist_point(p1,p2);
 output(p1,p2,r);
 }
 
 
