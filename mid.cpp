#include <iostream>
using namespace std;
int main()
{
 int a;
 int b;
 int c;
 
 cout<<"enter a"<<endl;
 cin>>a;
 cout<<"enter b"<<endl;
 cin>>b;
 cout<<"enter c"<<endl;
 cin>>c;
 if(a>b && a>c && b>c)
 {
 cout<<"middle number is "<<b<<endl;
 }
 else if(c>a && c>b && a>b)
 {
 cout<<"middle number is "<<a<<endl;
 }
 else if(b>a && b>c && b>a)
 {
 cout<<"middle number is "<<a<<endl;
 }
 
 
}
