#include<iostream.h>
#include<conio.h>

void main()
{
int i, no, fact=1;
clrscr();
cout<<"Enter num ";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
getch();
}
