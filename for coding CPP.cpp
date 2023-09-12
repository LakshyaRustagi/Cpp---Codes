#include<iostream>
using namespace std;

class A
{ int num;
	public:
		A(){     //empty constructor
		
		}
		A(int x)  //constructor
		{ 
		num=x;
		}
		A operator+ (A);
		
		void display()
		{
			cout<<num;
		}
};
    A A :: operator+ (A f)  //operator function
    {
    	A temp;
		temp=num+f.num;
		return temp; 
	}
	A A :: operator- (A f)  //operator function
    {
    	A temp;
		temp=num-f.num;
		return temp; 
	}
	
	

int main()
{
	A obj1(10),obj2(10),obj3;
	//++obj1;
	obj1.display();
	obj3=obj1+obj2;
	obj3.display();
	return 0;
}
