#include<stdio.h>

void input(int *a,int *b)
{
    printf("enter two numbers\n");
    scanf("%d%d",a,b);
}

int add(int a,int b)
{
   int c;
   c=a+b;
   return c;
   
}

void output(int a,int b)
{
  int c;
  printf("sum of %d and %d is=%d",a,b,c);
}

void main()
{ 
    int a,b,c;
    input(&a,&b);
    add(a,b);
    output(a,b);
}
