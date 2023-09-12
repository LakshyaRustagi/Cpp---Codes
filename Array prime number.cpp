#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter number of elements : ";
     cin>>n;
     int a[n];
     int i;
     cout<<"Enter elements : ";
     
     for(i=0;i<n;i++)
     {
     	cin>>a[i];
	 }
	 cout<<"Array is : ";
	 for(int i=0;i<n;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	 cout<<"\nPRIME:";
	 for(i=0;i<n;i++)
	 {  int found=1;
	 	int val=a[i];
	 	for(int j=2;j<=val/2;j++)
	 	{
	 		if (val%j==0)
	 		{
	 			found=0;
	 			break;
			 }
		}
			 if (found!=0)
			 {
			 	cout<<a[i]<<" ";
			 }
		 
	 }
}
