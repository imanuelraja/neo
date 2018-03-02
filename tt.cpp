#include<iostream>
int main()
{
 int s,e,i,j,count=0;
 cin>>s>>e;
 for(i=s;i<=e;i++)
 {
  for(j=2;j<=(i/2);j++)
  {
   if((i%j)==0)
   {
    count++;
   }
  }
  if(count=0)
  {
   cout<<i;
  }
  count=0;
  }
 } 
