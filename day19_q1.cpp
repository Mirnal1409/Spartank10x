#include<iostream>
using namespace std;
void func1(int *a,int st,int n)
{
	if(st==n)
	return;
	
	if(a[st]<0)
	a[st]=0;
	
	func1(a,st+1,n);	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	func1(arr,0,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"  ";
}
