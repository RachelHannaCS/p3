#include "exam.h"
using namespace std;

// prototypes
void dropTest(studType students[], int numStud);
void getGrade(int test1, int test2, int test3, int final);
void outputFile(studType students[], int numStud, ofstream& fileOut);
void outputScreen(studType students[], int numStud); // friend
void sortName(studType students[], int numStud);
void sortID(studType students[], int numStud);
void menu(ofstream& outFile, studType students[], int numStud);

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

// outputFile() function 
void outputFile(studType students[], int numStud, ofstream& fileOut) {
    for (int i = 0; i < numStud; i++) {
        fileOut << left << setw(10) << students[i].Name 
                << left << setw(10) << students[i].Test1
                << left << setw(10) << students[i].Test2 
                << left << setw(10) << students[i].Test3 
                << left << setw(10) << students[i].Final;
            //  << left << setw(10) << DROP
            //  << left << setw(10) << students[i].Total 
            //  << left << setw(10) << students[i].SID
            //  << left << setw(10) << GETGRADE
    }
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
void menu(ofstream& outFile, studType students[], int numStud) {
    int choice;
	// switch statement
while (true) {
	switch(choice) {
	case 1:
		// enter name of output file
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
		break;
	case 5:
		// output to file
		break;
	case 6:
		// quit
		break;
	default:
		cout << "Please enter menu choice: ";
	    cin >> choice;
	    break;
	}

}

}
