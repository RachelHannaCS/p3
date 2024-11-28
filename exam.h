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
  int Test1, Test2, Test3, Final;
 // getGrade(), outputFile() public member, outputScreen() friend
 double getGrade();
 int dropTest(); 
 void outputScreen(studType students[], int numStud);
 void outputFile(studType students[], int numStud);
 
 // create default constructor w base class 

 studType() : studentID("Null"), Name("Null"), Course("Null"), Test1(0), Test2(0), Test3(0), Final(0) {}
 // create parameterized constructor w base class 
 studType (string Name, int Test1, int Test2, int Test3, int Final);

 // create void printInfo
 void printInfo();
 
 // SID protected class 
  protected:
  string studentID;
};

class cs115: public studType {};
class cs120 :public studType{};
#endif
