#include<iostream>
#include<string>
using namespace std;


class Pizza
{
private:
	float size;
	double price;
	string topping;
	float thick;
public:
	//Default constructor
	Pizza() :size(0), price(0), topping(""), thick(0) {}
	//Initial constructor
	Pizza(float _size, double _price, string _topping, float _thick)
	:size(_size), price(_price), topping(_topping), thick(_thick) {}
	//Setters
	void SetSize(int _size) { size = _size; }
	void SetPrice(int _price) { price = _price; }
	void SetTopping(int _topping) { topping = _topping; }
	void SetThick(int _thick) { thick = _thick; }
	//Getters
	float GetSize() { return size; }
	double GetPrice() { return price; }
	string GetTopping() { return topping; }
	float GetThick() { return thick; }
};


void Display(Pizza* pz)
{
	cout << "\nPizza with " << pz->GetTopping();
	cout << "\nThickness is\t" << pz->GetThick()<<" cm";
	cout << "\nSize is\t\t" << pz->GetSize()<<" inches";
	cout << "\nPrice is\t" << pz->GetPrice()<<" PKR";
	cout << endl;
}
int main()
{
	Pizza a(8, 10, "sausage", 0.7);
	Pizza b(10, 15, "chicken and olives", 0.8);
	Pizza c(10, 17, "cheese", 1.2);
	Pizza d(7, 8, "mushrooms", 0.6);
	Pizza e(12, 25, "red fish", 1.3);
	Pizza pz[5] = { a,b,c,d,e };
	for (Pizza* i = &pz[0]; i!= &pz[5]; i++)
	{
		Display(i);
	}
}
