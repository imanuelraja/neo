#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[50],temp;
 int i,j=0;
 cout<<"Enter any the string :";
 gets(str);
 i=0;
 j=strlen(str)-1;
  while(i<j)
   {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse string is: "<<str;
 getch();
}
