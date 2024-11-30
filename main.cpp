#include "exam.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// global array 
int array = 40;
//prototype 
int dropTest(studType students[], int numStud, int test1, int test2, int test3);
int dropTest(studType students[], int numStud, int test1, int test2, int test3, int final);
double getGrade();
void outputScreen(studType students[], int numStud);
void outputFile(studType students[], int numStud, ofstream& fileOut);
void sortName(studType students[], int numStud);
void sortID(studType students[], int numStud);
void menu(ofstream& outFile, studType students[], int numStud);
 
int main () {
    // member variables Name, Test1, Test2, Test3, Final, Course
    string name, course, header;
    int Test1, Test2, Test3, Final, choice, totalGrade, grade;
    ifstream fileIn;
    ofstream fileOut;
    studType students[40];
    fileOut.open("final_grades.txt");

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
	// dropTest overload 
	for (int i = 0; i < 40; i++) {
			if (students[i].Course == "CS115") {
		  cout << students[i].dropTest(students[i].Test1, students[i].Test2, students[i].Test3);
		  grade = (students[i].Test1 + students[i].Test2 + students[i].Test3 + students[i].Final) - students[i].dropTest(students[i].Test1, students[i].Test2, students[i].Test3);
		  totalGrade += grade;
		  // cs120, lowest of 4 tests (including final) dropped
			}
		else if (students[i].Course == "CS120") {
		    cout << students[i].dropTest(students[i].Test1, students[i].Test2, students[i].Test3);	
		  grade = (students[i].Test1 + students[i].Test2 + students[i].Test3 + students[i].Final) - students[i].dropTest(students[i].Test1, students[i].Test2, students[i].Test3, students[i].Final);
		  totalGrade += grade;
		  // cs115, lowest of 3 tests (excluding final) dropped
			}
	}
			
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
	    cout << "Enter menu choice: ";
    cin >> choice;
    return 0;
}

void menu(ofstream& fileOut, studType students[], int numStud) {
    int choice;
	// switch statement
while (true) {
    cout << "Enter menu choice: ";
    cin >> choice;
	switch(choice) {
	case 1:
		// enter name of output file 
		{
		string fileName;
		cout << "Please enter the name of the data file: " << endl;
		cin >> fileName;
		fileOut.open(fileName);
		if(!fileOut) {
		    cout << "Error opening file!" << endl;
		    }
		}
		break;
	case 2:
		// sort by name (ascending A->Z)
		sortName(students, numStud);
		break;
	case 3:
		// sort by student ID (ascending)
		sortID(students, numStud);
		break;
	case 4:
		// output to screen
		outputScreen(students, numStud);
		break;
	case 5:
		// output to file
		outputFile(students, numStud, fileOut);
		break;
	case 6:
		// quit
		cout << "Exiting program..." << endl;
		fileOut.close();
		return;
	default:
		cout << "Please enter menu choice: ";
	    cin >> choice;
	    break;
	}

}

}

