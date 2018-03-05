#include<iostream>
void main()
{
 char str[50];
 int i,n;
 cin>>str;
 n=strlen(str);
 for(i=0;i<n;i++)
 {
  str[i]=str[i]+3;
  if(str[i]=='X')
  str[i]='A';
  if(str[i]=='Y')
  str[j]='B';
  if(str[i]=='Z')
  str[i]='C';
 }
 cin>>str;
 return 0;
} 
