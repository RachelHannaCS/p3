#ifndef H_exam
#define H_exam
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// studType base class 
class studType {
  // member variables Name, Test1, Test2, Test3, Final, Course (public)
  public:
  string Name, Course;
  int Test1, Test2, Test3, Final, SID;
 // create default constructor w base class 

 studType() : studentID("Null"), Name("Null"), Course("Null"), Test1(0), Test2(0), Test3(0), Final(0) {}
 // create parameterized constructor w base class 
 studType (string Name, int Test1, int Test2, int Test3, int Final);

 int dropTest(int test1, int test2, int test3);
 int dropTest(int test1, int test2, int test3, int final);
 // create void printInfo
 void printInfo();
 
  // set and get studentID 
void setStudentID(int SID) {
    studentID = SID;
}
string getStudentID() {
    return studentID;
}

 // SID protected class 
  protected:
  string studentID;
  
};
// sub classes 
class cs115: public studType {};
class cs120: public studType{};
#endif
