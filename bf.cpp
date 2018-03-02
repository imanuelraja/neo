#include<iostream>
int main()
{
 int e;
 int m,a,sum=0;
 cin>>e;
 while(e>=0)
 {
  a=e%10;
  m=a*a;
  sum=sum+m;
  a=a/10;
 }
 cin>>sum;
 return 0;
} 
