#include<iostream.h>
#include<conio.h>

 void main()
 {
 int i,a[5],temp,j;
 cout<<"Enter any 5 num in array";
 for(i=0;i<=5;i++)
 {
 cin>>a[i];
 }
 cout<<"\nData before sorting: ";
 for(j=0;j<5;j++)
 {
 cout<<a[j];
 }
 for(i=0;i<=5;i++)
 {
 for(j=0;j<=5-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(j=0;j<5;j++)
 {
 cout<<a[j];
 }
 getch();
 }
