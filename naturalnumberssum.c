#include<stdio.h>
void main()
{
 int i,s=0,n;
 printf("enter the limit:");
 scanf("%d",&n);      
 for(i=0;i<=n;i++)
 {
  s=s+i;
 }
 printf("sum=%d",s);
}
