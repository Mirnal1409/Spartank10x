#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int *arr=new int[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int max=INT_MIN;
	int temp=0;
	for(int j=0;j<n;j++)
	{
	
		temp=temp+arr[j];
		if(temp>max)
		max=temp;
		
		if(temp<0)
		temp=0;
	}
	
	cout<<max<<endl;
	
	return 0;
}
