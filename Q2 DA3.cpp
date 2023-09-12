#include<iostream> 

using namespace std;

class faculty
{
	public:
	int score;
	void setvalues(int x)
	{
	    score=x;
	    
	}
	
	friend int course4_score(faculty f);
	friend int course5_score(faculty f);
}; 

class C1 : public faculty
{
	public:
	int course1_score(){
	    return (score+10);
	}  
}; 
class C2 : public faculty 
{
	public:
	int course2_score(){
	    return (score+40); 
	    
	}
};

class C3 : public faculty 
{
	public:
	int course3_score(){
	    return (score+1); 
	    
	}
};
class C4 : protected faculty  
{
	public:
	int course4_score(faculty f){
	    return (f.score+2); 
	    
	}
};
class C5 : private faculty 
{
	public:
	int course5_score(faculty f){
	    return (f.score+3); 
	    
	}
};

int main ()
{
	C1 c1;
	faculty f;
	c1.setvalues(60);
	cout << "The Course 1 value is :: " << c1.course1_score() << endl;
	
	C2 c2;
	c2.setvalues(60);
	cout << "The course 2 value is :: " << c2.course2_score() << endl;
	
	C3 c3;
	c3.setvalues(60);
	cout << "The Course 3 value is :: " << c3.course3_score() << endl;
	
	C4 c4;
    f.setvalues(60);
	cout << "The Course 4 value is :: " << c4.course4_score(f) << endl;
	
	C5 c5;
	f.setvalues(60);
	cout << "The Course 5 value is :: " << c5.course5_score(f) << endl;
	
	
	cout << "The total score is : " << c1.course1_score()+c2.course2_score()+c3.course3_score()+c4.course4_score(f)+c5.course5_score(f)<< endl;
	
	return 0;
}
