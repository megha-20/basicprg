#include<stdio.h>

void input()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
}

int add(a,b)
{
   int c;
   c=a+b;
   return c;
   
}

void output()
{
  int c;
  printf("sum of two numbers is=%d",c);
    
}

void main()
{ 
    int a,b,c;
    input();
    add(a,b);
    output(c);
    
}
