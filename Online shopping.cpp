#include<iostream>    //21BPS1347

using namespace std;
int main()
{
int item=0;
int Apple=40000;
int Java = 4000;
int Xiomi = 21000;
int Smart_Watch = 68000;
int counthp , countja , countre , countsm ; 
counthp = countja= countre = countsm = 0; 
int sdf , javat , ret , smt ; 
sdf = javat = ret = smt=0 ; 
int cost=0;
int count=0 ;
int tip=0;
int totalcost=0;
   cout<<"\n"<<endl;
   cout<<"Online Shoping"<<endl;
   cout<<"1. Apple : 40000"<<endl;
   cout<<"2. Java : 4000"<<endl;
   cout<<"3. Xiomi : 21000"<<endl;
   cout<<"4. Smart_Watch : 68000"<<endl;
   cout<<"5. End Shopping"<<endl;
while(item != 5){
cout<<"\n"<<endl;
cout<<"Choose Your Item / Select Your Choice : "<<endl;
cin>> item;  
switch (item) {
case 1:
cout << "Apple"<<endl;
cout<<"Quantity of Item :"<<endl;
cin>>count;
counthp = counthp + count;
break;
case 2:
cout << "Java"<<endl;
cout<<"Quantity of Item :"<<endl;
cin>>count;
countja = countja + count;
break;
case 3:
cout << "Xiomi"<<endl;
cout<<"Quantity of Item :"<<endl;
cin>>count;
countre = countre + count;
break;
case 4:
cout << "Smart_Watch"<<endl;
cout<<"Quantity of Item :"<<endl;
cin>>count;
countsm = countsm + count;
break;}}
sdf=counthp *Apple;
javat=countja *Java;
ret=countre * Xiomi;
smt=countsm *Smart_Watch;
cout<<"\n"<<endl; 
cout<<"Item\t\tQuantity\tPrice"<<endl;
cout<<"Apple\t\t"<<counthp<<"\t\t"<< Apple<<endl; 
cout<<"Java\t\t"<<countja<<"\t\t"<< Java<<endl; 
cout<<"Xiomi\t\t"<<countre<<"\t\t"<< Xiomi<<endl; 
cout<<"Smart Watch\t"<<countsm<<"\t\t"<< Smart_Watch<<endl; 
cout<<"************"<<endl;
cout<<"Total Amount is :\t\t";
cost=sdf+javat+ret+smt;
cout<<cost<<"\n\n"<<endl;    
return 0;}
