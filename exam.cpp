#include "exam.h"
using namespace std;

// prototypes
int dropTest(studType students[], int numStud, int test1, int test2, int test3, int final);
void getGrade(int test1, int test2, int test3, int final);
void outputFile(studType students[], int numStud, ofstream& fileOut);
void outputScreen(studType students[], int numStud); // friend
void sortName(studType students[], int numStud);
void sortID(studType students[], int numStud);
void menu(ofstream& outFile, studType students[], int numStud);

// dropTest() function
int studType::dropTest(int test1, int test2, int test3) {
        int drop = 0;
        if (test1 < test2 && test1 < test3) {
            return test1;
        }
        else if (test2 < test1 && test2 < test3) {
            return test2;
        }
        else if (test3 < test1 && test3 < test2) {
            return test3;
        }
        return drop;
	}
	
int studType::dropTest(int test1, int test2, int test3, int final) {
        int drop = 0;
        if (test1 < test2 && test1 < test3 && test1 < final) {
            return test1;
        }
        else if (test2 < test1 && test2 < test3 && test2 < final) {
            return test2;
        }
        else if (test3 < test1 && test3 < test2 && test3 < final) {
            return test3;
        }
        else if (final < test1 && final < test2 && final < test3) {
            return final;
        }
        return drop;
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
