#include "exam.h"
#include <fstream>
using namespace std;

// global array 
int array = 40;
//prototype for 

int main () {
    // member variables Name, Test1, Test2, Test3, Final, Course
    string name, course, header;
    int Test1, Test2, Test3, Final, choice;
    ifstream fileIn;
    ofstream fileOut;

    // try/cast for input file 
    try {
        fileIn.open("scores.txt");
    } catch (string error) {
        throw "Error! Can't open file. ";
        return 1;
    }
        // if not found, exit program
    
    // header
	getline(fileIn, header);
	fileOut << "Student               T1     T2     T3  Final   Drop  Total  SID     Grade" << endl;
	// record detail
    
    // menu 

	// switch statement
	switch(choice) {
	    int choice;
	case 1:
		// enter name of output file
		break;
	case 2:
		// sort by name (ascending A->Z)
		break;
	case 3:
		// sort by student ID (ascending)
		break;
	case 4:
		// output to screen
		break;
	case 5:
		// output to file
		break;
	case 6:
		// quit
		break;
	default:
		cout << "Enter menu choice: ";
	    cin >> choice;
		break;
	}
	while (choice < 6);
	
    return 0;
}


