#include <iostream>
using namespace std;

class student
{
protected:
  int da_marks;
  int project_marks;
public:
  void setdaMarks(int dm) 
  {     da_marks = dm;   }
  void setProjectMarks(int pm) 
  {     project_marks = pm;	 }
};

class CSEStudent: public student
{
  public:
  int getMarks() { 
    return (da_marks+project_marks); 
  }
};

int main(void) {
  CSEStudent Ram;
  Ram.setdaMarks(70);
  Ram.setProjectMarks(34);  
  cout << "Total Marks: " << Ram.getMarks() << " out of 130 " << endl;

  return 0;
}

