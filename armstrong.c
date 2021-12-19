#include<stdio.h>
void armstrong(int a)
{
  int r,sum=0,temp;
  temp=a;
  while(a!=0)
  {
   r=a%10;
   sum=sum+r*r*r;
   a=a/10;
  }
  if(temp==sum)
  {
   printf("this is armstrong");
  }
  else
  {
   printf("not");
  }
}
void main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  armstrong(n);
}
