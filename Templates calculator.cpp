#include<iostream>
using namespace std;

template<typename T>
class gencalculator
{
	public:
T addition(T var1 , T var2)
{
	T sum;
	sum=var1+var2;
	cout<<sum<<endl;
}
T subtraction(T var1 , T var2)
{
	int diff;
	diff=var1-var2;
	cout<<diff<<endl;
} 
T multiply(T var1 , T var2)
{
	T product;
	product=var1*var2;
	cout<<product<<endl;
}
T divide(T var1 , T var2)
{
	T quotient;
	quotient=var1/var2;
	cout<<quotient<<endl;
} 
};
int main()
{   
	int a=6,b=4;
gencalculator<int>addition<int>(a,b);
	
	
	return 0;
}









