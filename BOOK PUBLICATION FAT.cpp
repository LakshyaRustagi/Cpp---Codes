#include<iostream>
//#include<string>
using namespace std;

class publication   //base class
{
	public:
	string title;
	float price;
	
		virtual void get_data(){
			cin>>title;
	cin>>price;
		}
	
			virtual void put_data(){
				cout<<title<<endl;       
				cout<<price<<endl;
			}

		};
		
class book : public publication   //derived class
{   public:
		int pagecount;
	void get_data()
	{   
		cin>>pagecount;
	}
	void put_data()
	{
		cout<<pagecount<<endl;
	}
};
class Tape : public publication    //derived class
{   public:
	float playing_time;
	void get_data()
	{
		cin>>playing_time;
	}
	void put_data(){
		cout<<playing_time<<endl;
	}
};
int main()
{   
    publication q;
	publication *p1;
	p1=&q;
	p1->get_data();
	p1->put_data();  
	
	book b;
	p1=&b;
	p1->get_data();
	Tape t;
	p1=&t;
	p1->get_data();
	
	return 0;
}












