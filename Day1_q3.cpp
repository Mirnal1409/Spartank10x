#include<iostream>
using namespace std;

int main()
{
int n,i;
cin>>n>>i;

int c=1;
while(c<i)
{
	n=n>>1;
	c++;
}

int x=n&1;
if(x==1)
cout<<"Set";
else
cout<<"Not set";

return 0;




}
