#include <iostream>
using namespace std;
 
class one
{
    private:
        int test1;
    public:
        void get_test1(int val_test1)
        {
            test1=val_test1;
        }
         
        void disp_test1(void)
        {
            cout << "Value of test1 is : " << test1 << endl;
        }
};


class Two: public one
{
    private:
        int test2;
    public:
        void get_test2(int val_test1, int val_test2)
        {
            get_test1(val_test1);   
            test2=val_test2;
        }
         
        void disp_test2(void)
        {
            disp_test1();
            cout << "Value of test2 is : " << test2 << endl;
        }
};

class Three: public Two
{
    private:
        int test3;
    public:
        void get_test3(int val_test1, int val_test2,int val_test3)
        {
        
            get_test2(val_test1,val_test2); 
            test3=val_test3;
        }
         
        void disp_test3(void)
        {
            disp_test2();
            cout << "Value of test3 is : " << test3 << endl;
        }
};
 
int main()
{
    
    Three obj3;  
    obj3.get_test3(120,302,132);
    obj3.disp_test3();
     
    return 0;
}
