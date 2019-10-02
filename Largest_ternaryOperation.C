#include<stdio.h>

int input()
{
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 return a;
}

int largest(int a,int b,int c)
{
 int l;
 l=a>b?(a>c?a:c):(b>c?b:c);
 return l;
}

void output(int l)
{
 printf("largest of 3 numbers is %d",l);
}

void main()
{
 int a,b,c,l;
 a=input();
 b=input();
 c=input();
 l=largest(a,b,c);
 output(l);
}
