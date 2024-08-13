/*
Course name and section: COEN-243 CC
Student name: Romain Giroux
Student ID: 40177867
Final Project
*/
#include<iostream>
#include<string>
#include<fstream>
#include "Student.h"
#include "Staff.h"
#include "Student_Staff.h"

void nextLine(int n = 1);    // Goes to next line for formating n times with 1 time as default.
void charLine(char c, int l1 = 0, int l2 = 2, int n = 50);    // prints char c 50 times as a default then goes to the next line twice as default for formating.

int main() {

	int yearHiredInput;

	Student_Staff studentStaffDriver;

	charLine('~');

	std::cout << "The information of the student with the highest GPA is as seen below:\n";
	studentStaffDriver.highestGpa(); 

	charLine('~', 2);

	std::cout << "The number of undergraduate students is: " << studentStaffDriver.numberOfUndergrad();

	charLine('~', 2);


	try {
		std::cout << "Please enter a year the i'll tell you the names of the employee's that where hired that year: ";
		std::cin >> yearHiredInput;
		
		if (std::cin.fail() || yearHiredInput > 2024 || yearHiredInput < 1000) {
			throw "The input value is not a valid year.";
		}

		studentStaffDriver.sameHireYear(yearHiredInput);

		charLine('~', 1);
	}

	catch (const char* msg) {
		std::cout << msg << std::endl;
	}


	return 0;
}

void nextLine(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << std::endl;
	}
}

void charLine(char c, int l1, int l2, int n) {
	nextLine(l1);
	for (int i = 0; i < n; i++) {
		std::cout << c;
	}
	nextLine(l2);
}