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
	
	// footer 
//	fileOut << "Average " << fixed << setprecision(2) << ... << endl;
    
    //menu 
	cout << "   ========= Sort Menu ==========" << endl;
	cout << "1. Enter the name of the input file" << endl;
	cout << "2. Sort by name (ascending, A -> Z)" << endl;
	cout << "3. Sort by Student ID (ascending)" << endl;
	cout << "4. Output to screen" << endl;
	cout << "5. Output to file" << endl;
	cout << "6. Quit" << endl;
	cout << "==========" << endl;
	cout << "Enter menu choice: ";
	cin >> choice;
	
    return 0;
}




