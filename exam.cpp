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
	ofstream& operator< (ofstream&, const studType& students) {
	    int counter = 0;
	    int lowest = 100; 
		// do if statement to check cs120 and cs115
		if (students[i].course == "CS115") {
		  // cs120, lowest of 4 tests (including final) dropped
		  for (int i = 0; i < numStud; i++) {
			if (students[i] < lowest) {
				students[i] = lowest;
			}
		}
		else if (students[i].course == "CS120") {
		  // cs115, lowest of 3 tests (excluding final) dropped
  
		}
		//for loop for the array of scores
		for (int i = 0; i < numStud; i++) {
			if (students[i] < lowest) {
				students[i] = lowest;
			}
		}
	}
}
// getGrade() function
void getGrade(studType students[], int numStud) {
	// return letter grade based on 300 pts
}
// outputScreen() function
void outputScreen(studType students[], int numStud) {
	// header
	// record detail
	// footer (calculate overall average each column + average + # stud)
}
// sortName() function
void sortName(studType students[], int numStud) {

}
// sortID() function
void sortID(studType students[], int numStud) {

}
// menu() function
void menu(studType students[], int numStud) {
	int choice;
	// switch statement
	switch(choice) {
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
		break;
	}
}

