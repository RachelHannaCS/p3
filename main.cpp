#include "exam.h"
#include <fstream>
using namespace std;

// global array 
int array = 40;
//prototype for 

int main () {
    // member variables Name, Test1, Test2, Test3, Final, Course
    string name, course;
    int Test1, Test2, Test3, Final, choice;
    ifstream fileIn;

    // try/cast for input file 
    try {
        fileIn.open("scores.txt");
    } catch (string error) {
        throw "Error! Can't open file. ";
        return 1;
    }
        // if not found, exit program
    
    return 0;
}

