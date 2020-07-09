#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n==1)
	cout<<"true";
	else
	{
		while(n>1)
		{
			int rem=n%2;
			if(rem!=0)
			{
				cout<<"false";
				return 0;
			}
			n=n/2;
			
		}
		
		cout<<"true";
	}
	
	return 0;
	
}
