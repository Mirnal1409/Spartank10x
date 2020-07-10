#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	unsigned char x1=(unsigned char)n;
	int x2=n;
	
	int i=1;
	
	while(i<=4)
	{
		i++;
		x1=x1<<1;
	}
	
	int r=(int)x1; // typecasting to integer
//	cout<<r<<endl;
	
	i=1;
	
	while(i<=4)
	{
		i++;
		x2=x2>>1;
	}
//	cout<<x2<<endl;
	int res=r|x2;
	
	cout<<res;
	
	return 0;
	
	
}
