#include "exam.h"
using namespace std;

// prototypes
void dropTest(studType students[], int numStud);
void getGrade(int test1, int test2, int test3, int final);
void outputFile(studType students[], int numStud, ofstream& outfile);
void outputScreen(studType students[], int numStud); // friend
void sortName(studType students[], int numStud);
void sortID(studType students[], int numStud);
void menu(studType students[], int numStud);

// dropTest() function
void dropTest(studType students[], int numStud) {
	// function for dropTest() determine lowest score (overload)
//	ofstream& operator< (ofstream&, const studType& students) {
	    int counter = 0;
	    int lowest = 100; 
// 		// do if statement to check cs120 and cs115
// 		if (students[i].course == "CS115") {
// 		  // cs120, lowest of 4 tests (including final) dropped
// 		  for (int i = 0; i < numStud; i++) {
// 			if (students[i] < lowest) {
// 				students[i] = lowest;
// 			}
// 		}
// 		else if (students[i].course == "CS120") {
// 		  // cs115, lowest of 3 tests (excluding final) dropped
  
// 		}
// 		//for loop for the array of scores
// 		for (int i = 0; i < numStud; i++) {
// 			if (students[i] < lowest) {
// 				students[i] = lowest;
// 			}
//		}
//	}
}


// getGrade() function
void getGrade(studType students[], int numStud) {
	// return letter grade based on 300 pts
}
// outputScreen() function
void outputScreen(studType students[], int numStud) {
	// footer (calculate overall average each column + average + # stud)
}
// sortName() function
void sortName(studType students[], int numStud) {
    for (int i = 0; i < numStud - 1; i++) {
        for (int j = 0; j < numStud - i - 1; j++) {
            studType temp;
            if(students[j].Name > students[j + 1].Name) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}
// sortID() function
void sortID(studType students[], int numStud) {
    for (int i = 0; i < numStud - 1; i++) {
        for (int j = 0; j < numStud - j - 1; j++) {
            if (students[j].getStudentID() > students[i + 1].getStudentID()) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}
// menu() function
void menu(studType students[], int numStud) {
	cout << "========= Sort Menu ===========" << endl;
	cout << "1. Enter the name of the input file" << endl;
	cout << "2. Sort by name (ascending, A -> Z)" << endl;
	cout << "3. Sort by Student ID (ascending)" << endl;
	cout << "4. Output to screen" << endl;
	cout << "5. Output to file" << endl;
	cout << "6. Quit" << endl;
	cout << "==========" << endl;
}

