#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>

using namespace std;

class Item{
	public:
		string item_name;
		int price,total;
		int list=0;
		string item;
		int quantity,quantitywanted,i;
	void purchase()
	{   /*cout<<"Enter inventory :";
	    cin>>item;
	    cout<<"Enter required item :";
		cin>>item_name;
		cout<<"Enter available quantity :";
		cin>>quantity;
	    cout<<"Enter required quantity :";
	    cin>>quantitywanted;}*/ 
	    cout<<"Enter inventory :";
	    
		cin>>item;
	    cout<<"Enter required item :";
		cin>>item_name;
		cout<<"Enter available quantity :";
		cin>>quantity;
	    cout<<"Enter required quantity :";
	    cin>>quantitywanted;
	    for(i=0;i<3;i++)
		{
		if(item!=item_name)
		{ 
	    	list=1;
	        break;
		}
		else if(item==item_name)
		{
		    if(quantity==quantitywanted)
			{
		    	list=2;
			}	
			else{
				list=3;
			}
		}
}
}
	void display()
	{
		if(list==1)
		{
			cout<<"Not available";
		}
		if(list==2)
		{
			cout<<"Total price = 60rs ";
		}
		if(list==3){
			cout<<"Required amount not available";
		}
	}
	
};

int main()
{
	Item a;
	a.purchase();
	a.display();
	return 0;
}
