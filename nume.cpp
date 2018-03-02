int num;
char * string;
 cin>>string;
num = atoi( string );
 
if (num == 0 && string[0] != '0')
   cout<<"No";
else
   cout<<"Yes";
