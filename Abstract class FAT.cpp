#include<iostream>
using namespace std;

class Computer
{
	public:
		string company_name;
		int price;
	
    virtual void get_data()
	{
    	cin>>company_name;
    	cin>>price;
	}
	virtual void show()
	{
		cout<<company_name<<endl;
		cout<<price<<endl;
	}
};

class Desktop : public Computer
{
	public:
		string color;
		int monitor_size;
		string processor;
	
	void get_data()
	{
		cin>>color;
		cin>>monitor_size;
		cin>>processor;
	}
	void show()
	{
		cout<<color<<endl;
		cout<<monitor_size<<endl;
		cout<<processor<<endl;
	}
};

class Laptop : public Computer
{
	string color1;
	int size;
	int weight;
	string processortype;
	
	void get_data()
	{
		cin>>color1;
		cin>>size;
		cin>>weight;
		cin>>processortype;
	}
	void show()
	{
		cout<<color1<<endl;
		cout<<size<<endl;
		cout<<weight<<endl;
		cout<<processortype<<endl;
	}
};
int main()
{
	Computer c;
	Computer *p1;
	p1=&c;
	p1->get_data();
	p1->show();
	Desktop d;
	
	p1=&d;
	p1->get_data();
	p1->show();
	Laptop l;

	p1=&l;
	p1->get_data();
	p1->show();
	return 0;
}








