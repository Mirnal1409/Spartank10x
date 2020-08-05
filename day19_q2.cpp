#include<iostream>
using namespace std;
bool func2(int *a,int st,int n,int element)
{
	if(st==n)
	return false;
	
	if(a[st]==element)
	return true;
	
	return func2(a,st+1,n,element);	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int element;
	cin>>element;
	cout<<func2(arr,0,n,element);
	

}
