#include <iostream>

using namespace std;

template<class T>
void swapVariables(T var1, T var2)
{
    cout<<"Before swapping : "<<var1<<' '<<var2<<endl;
    T temp;
    temp=var1;
    var1=var2;
    var2=temp;
    cout<<"After swapping: "<<var1<<" "<<var2<<endl;
    
}

int main()
{
    float float1=3.5,float2=5.6;
    //cout<<float1<<" "<<float2<<endl;
    swapVariables(float1,float2);
    //cout<<float1<<" "<<float2;
    
    swapVariables("mav","nish");

    return 0;
}
