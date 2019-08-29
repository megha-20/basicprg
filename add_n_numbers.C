#include<stdio.h>

void input(int *n)
{
    printf("enter the number of integers to add\n");
    scanf("%d",n);
}

int add(int n)
{
   int c,sum=0,value;
   printf("enter %d integers\n",n);
  
   for(c=1;c<=n;c++)
   {
       scanf("%d",&value);
       sum=sum+value;
   }
   
   return sum;
}

void output(int n)
{
  int sum;
  printf("sum of integers=%d\n",sum);
}

void main()
{ 
    int n,sum;
    input(&n);
    add(n);
    output(n);
}
