#include<iostream.h>
#include<conio.h>
void main()
{
	int num, rev=0, rem;
	cout<<"Enter num";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"Reverse = "<<rev;
	getch();
}
