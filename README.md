When writing your code:

You may use only libraries(modules) and functions(methods) covered or used in my lecture.
You must write your code using only the specific format used in my lecture.
Using any type of coding not used in this course will result in an automatic score of zero(0).

During the semester, students in the computer science department take 3 tests and a final in each of their courses.  Using classes & OOD, create a program that uses all the data located in the scores.txt Download scores.txt to return the letter grade for each student as follows:

You will use the data in file scores.txt Download scores.txtto generate output formatted as in sample_output.txtDownload sample_output.txt
The values on your output will differ from my sample_output.txtDownload sample_output.txt
Your formatting should match exactly my sample_output.txtDownload sample_output.txt
Create a header file "exam.h"
All class definitions will be contained in this file
In exam.h, create 3 classes: base-class studType, and two sub-class cs115 and cs112
In the base-class studType:
The member variables Name, Test1, Test2, Test3, Final, and Course are seen from main( ) and all derived classes
The member variable SID will be hidden to main( ), but not in the public-derived classes (only in public-derived classes will SID be seen)
studType members will be seen in cs115 and also from any cs115 instance in main( )
studType members will be seen in cS120, but not from any cs120 instance in main( )
Create exam.cpp
This file will contain all required function code:  dropTest( ), getGrade( ), outPutFile( ), outputScreen( ), sortName( ). sortID( ),  and menu( )
In main( ), use exception handling (try/cast) to test for the input file. Display a message on the screen if the file is or is not found.
Message if the input file exists:   "Processing . . ."
Message if the input file is not found:  "ID107 Error: File was not found. Exiting program!!!"
If the input file is not found, exit the program.
Create a function named dropTest( ) for the CS115 and CS120 students - that determines the lowest test score for each student.
For CS115 students, the lowest of the 3 test scores (not the final) is dropped.
Only the sum of the top 2 tests plus the final will be used to determine each student's grade.
For CS120 students, the lowest of the 4 test scores (including the final) is dropped.
Only the sum of the top 3 tests will be used to determine each student's grade.
Overload dropTest for 3 and 4 parameters.
Return the letter grade for each student utilizing a function named getGrade( ).  The grade is based on a total of 300 points (A - 89%, 79% - B, 69% - C, 59% - D, less than 59% - F).
The function getGrade( ) will be a public member of studType
Create a function called outputFile( ) - that outputs the header, record detail, and footer to the file"final_grades.txt".
The output file shall be named "final_grades.txt".
The function outPutFile( ) will be a public member of studType
Your formatting shall match exactly my file  sample_output.txt Download sample_output.txt   (your totals and grades will be different values)   
Create a function called outputScreen( ) - that outputs the header, record detail,  and footer to the screen.
Your formatting shall match exactly my file sample_output.txtDownload sample_output.txt
The function outputScreen( ) will be a friend of studType
In the footer, calculate the overall average for each column (test1, test2, test3, final, and total - one decimal point) and include the average total grade and the number of students.
Create a function named sortName( ) - that sorts all of your records by name.  This function will not be a member of any class
Create a function named sortID( ) - that sorts all of your records by Student ID.  This function will not be a member of any class
Create a function named menu( ) as follows :
==== Sort Menu ====

Enter the name of the input file
Sort by name (ascending, A -> Z)
Sort by Student ID (ascending)
Output to screen
Output to file
Quit
================

        Enter Menu Choice: _

 

11. This menu will repeat until you quit by pressing '6'.     This function will not be a member of any class
12. Use a switch statement in your menu and use the appropriate functions for each menu item.
13.  When You enter 1. you will prompt the user with:  "Please enter name of data file: "

14. At a minimum, your program should have an

if statements
switch statement
for loop
while loop
default constructor
parameterized constructor
overload function
pointer used in a function
try/catch exception handling
You must use both value return and void function
14. Your code should be pretty and easy to read (use comments)
15. Comment your algorithm step before the corresponding code.
16. Use onlineGDB to write your program:

Copying and Pasting are disabled.  You must type out the entire program.
Click the Save every few minutes to avoid losing your work.
If you have a server issue with OnlineGDB, click the refresh button (or [ctrl] + Refresh) until the page returns.
When complete, click the Submit (Resubmit) button to get credit for your work.
 
