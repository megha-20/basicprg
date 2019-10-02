#include<stdio.h>
struct point
{
 float x;
 float y;
};
struct point input()
{
 struct point p;
 printf("enter the x and y co-ordinates\n");
 scanf("%f%f",&p.x,&p.y);
 return p;
}

float distance(structpoint p1,structpoint p2)
{
 float r;
 r=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
 return r;
}

float output(structpoint p1,structpoint p2,float r)
{
 printf("the distance between %f%f and %f%f is %f",p1.x,p1.y,p2.x,p2.y,r);
}

void main()
{
 float r;
 structpoint p1,p2;
 structpoint p1=input()
 structpoint p2=input()
 r=distance(p1,p2);
 output(p1,p2,r);
 }
 
 
