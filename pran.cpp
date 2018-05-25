#include<iostream>
int main()
{
 char str[20];
 int i,count1=0,count2=0;
 cin>>str;
 for(i=0;str[i]!="/0";i++)
 {
  if(str[i]='(')
  { 
   count1==coun1+1;
  }
  elseif(str[i]==')')
  { 
   count2=count2+1;
  }
 }
 if(count1==count2)
 {
  cout<<"Yes";
 }
 else
 {
  cout<<"No";
 }
} 
