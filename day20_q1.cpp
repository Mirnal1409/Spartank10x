#include<iostream>
using namespace std;
int f1(int *arr,int st,int end,int elem)
{
	if(st==end)
	return 0;
	
	if(arr[st]==elem)
	return 1+f1(arr,st+1,end,elem);
	else
	return f1(arr,st+1,end,elem);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int elem;
	cin>>elem;
	
	cout<<f1(arr,0,n,elem);
}
