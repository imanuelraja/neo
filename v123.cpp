#include<stdio.h>
void main()
{
 int min,hrs,mins,secs=00;
 printf("");
 scanf("%d",&min);
 hrs=min/60;
 mins=min%60;
 if(mins>60)
 {
  secs=mins%60;
  mins=mins-secs;
 }
 printf("%d %d %d",hrs,mins,secs);
 return 0;
} 
