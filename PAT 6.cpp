#include <iostream>
using namespace std;
class lax
{
	public:
		virtual void input()
		{
			cout<<"            ";
		}
};
class lax1:public lax
{
	int n,reversed_number,remainder;
	public:
		void input()
		{
			cin>>n;
			while(n != 0) 
			{
            remainder = n % 10;
		    reversed_number = reversed_number * 10 + remainder;
		    n /= 10;
		  	}
		  	cout<<reversed_number;
		}
};
int main()
{
	lax *ptr;
	lax1 s;
	ptr=&s;
	s.input();
	
}
