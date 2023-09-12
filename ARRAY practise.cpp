#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[n];
	cout<<"Enter no of elements in array : ";
	cin>>n;
	cout<<"Enter elements : ";
	int i;
	for(i=0;i<n;i++)
	{  
	cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
	if( a[0]<a[i])
	{
		a[0]=a[i];
	}

	}
		cout<<a[0];
}
