#include<iostream>
using namespace std;
void f2(int *arr,int st,int end)
{
	if(st==end)
	return;
	if(st<end)
	{
		int temp=arr[st];
		arr[st]=arr[end];
		arr[end]=temp;
		
		f2(arr,st+1,end-1);
	}
	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	f2(arr,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"  ";

}
