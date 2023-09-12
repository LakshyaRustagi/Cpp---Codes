#include<iostream>

using namespace std;

const int length = 20 ;

class student  
{
        public:
            char firstname[length];
        char lastname[length];
            int age;
        int rollno ;
                void Enter_data(void)
                {
                         cin >> firstname ;
                         cin >> lastname ;
                         cin >> age ;
                        cin >> rollno ;
                }
                void Display_data(void)
                {
                        cout << "\nFirst Name = " << firstname ;
                        cout << "\nLast Name = " << lastname ;
                        cout << "\nAge = " << age ;
                        cout << "\nRoll Number = " << rollno ;
                }
};

class arts : public student
{
        private:
                char asub1[length] ;
                char asub2[length] ;
                char asub3[length] ;
        public:
                void Enter_data(void)
                {
                        student :: Enter_data( );
                         cin >> asub1 ;
                         cin >> asub2 ;
                         cin >> asub3 ;
                }
                void Display_data(void)
                {
                        student :: Display_data( );
                        cout << "\nSubject 1 of the art student = " << asub1 ;
                        cout << "\nSubject 2 of the art student = " << asub2 ;
                        cout << "\nSubject 3 of the art student = " << asub3 ;
                }
};

class science : public student
{
        private:
                char ssub1[length] ;
                char ssub2[length] ;
                char ssub3[length] ;
        public:
                void Enter_data(void)
                {
                        student :: Enter_data( );
                         cin >> ssub1;
                         cin >> ssub2;
                         cin >> ssub3;
                }
                void Display_data(void)
                {
                        student :: Display_data( );
                        cout << "\nSubject 1 of the science student = " << ssub1 ;
                        cout << "\nSubject 2 of the science student = " << ssub2 ;
                        cout << "\nSubject 3 of the science student = " << ssub3 ;
                }
};

class commerce : public student
{
        private:   char csub1[length], csub2[length], csub3[length] ;
        public:
                void Enter_data(void)
                {
                        student :: Enter_data( );
                        
                        cin >> csub1;
                       
                        cin >> csub2 ;
                        
                        cin >> csub3 ;
                }
                void Display_data(void)
                {
                        student :: Display_data( );
                        cout << "\nSubject 1 of the commerce student = " << csub1 ;
                        cout << "\nSubject 2 of the commerce student = " << csub2 ;
                        cout << "\nSubject 3 of the commerce student = " << csub3 ;
                }
};

int main()
{
                arts r;
                
                r.Enter_data( );
                
                r.Display_data( );
                science e ;
                
                e.Enter_data( );
                 
                e.Display_data( );
                commerce o ;
                
                o.Enter_data( );
                
                o.Display_data( );
return (0);
}
