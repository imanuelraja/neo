#include<iostream>
void main()
{
 int l,r,len,i;
 cin>>l>>r;
 if(l>r)
 {
  len=l;
 }
 else
 {
  len=r;
 }
 for(i=2;i<=len;i++)
 {
  if((i%l==0) && (i%r==0))
  {
   cout<<i;
  }
 return 0;
}
}
