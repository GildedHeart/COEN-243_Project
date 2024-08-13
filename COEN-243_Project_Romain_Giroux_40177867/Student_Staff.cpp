#include<iostream>
#include<string>
#include<array>
#include<fstream>
#include "Student.h"
#include "Staff.h"
#include "Student_Staff.h"

// Constructors

Student_Staff::Student_Staff() {

	std::string firstLine;

	std::ifstream studentFile;

	studentFile.open("student.txt");


	std::getline(studentFile, firstLine);

	studentNumber = std::stoi(firstLine) / 8;    // Divides number of lines by the number of attributes to get the number of students.

	studentPtr = new Student[studentNumber];

	for (int i = 0; i < studentNumber; i++) {
		for (int j = 0; j < 8; j++) {

			std::string currentLine;
			std::getline(studentFile, currentLine);

			switch (j) {
			case 0:
				studentPtr[i].setStudentFirstName(currentLine);
				currentLine.clear();

				break;

			case 1:
				studentPtr[i].setStudentLastName(currentLine);
				currentLine.clear();

				break;

			case 2: 
				studentPtr[i].setStudentId(currentLine);
				currentLine.clear();

				break;

			case 3:
				studentPtr[i].setDateOfBirth(currentLine);
				currentLine.clear();

				break;

			case 4:
				studentPtr[i].setGpa(std::stod(currentLine));
				currentLine.clear();

				break;

			case 5:
				studentPtr[i].setStartYear(std::stoi(currentLine));
				currentLine.clear();

				break;

			case 6:
				studentPtr[i].setCompletedCredits(std::stod(currentLine));
				currentLine.clear();

				break;

			case 7:
				studentPtr[i].setProgram(currentLine[0]);
				currentLine.clear();

				break;
			}
		}	
	}

	studentFile.close();


	std::ifstream staffFile;

	staffFile.open("staff.txt");

	std::getline(staffFile, firstLine);

	staffNumber = std::stoi(firstLine) / 6;    // Divides number of lines by the number of attributes to get the number of employees.

	staffPtr = new Staff[staffNumber];

	for (int i = 0; i < staffNumber; i++) {
		for (int j = 0; j < 6; j++) {
			
			std::string currentLine;
			std::getline(staffFile, currentLine);

			switch (j) {
			case 0:
				staffPtr[i].setEmployeeFirstName(currentLine);
				currentLine.clear();

				break;

			case 1:
				staffPtr[i].setEmployeeLastName(currentLine);
				currentLine.clear();

				break;

			case 2:
				staffPtr[i].setEmployeeId(currentLine);
				currentLine.clear();

				break;

			case 3:
				staffPtr[i].setDateOfHire(currentLine);
				currentLine.clear();

				break;

			case 4:
				staffPtr[i].setBonusCode(currentLine[0]);
				currentLine.clear();

				break;

			case 5:
				staffPtr[i].setCurrentSalary(std::stod(currentLine));
				currentLine.clear();

				break;

			}
		}
	}

	staffFile.close();

}

// Member functions

void Student_Staff::highestGpa() {
	int bestStudent = 0;

	for (int i = 0; i < studentNumber; i++) {
		
		double tempGpa = 0.0;

		if (studentPtr[i].getGpa() > tempGpa) {
			tempGpa = studentPtr[i].getGpa();
			bestStudent = i;
		}
	}

	studentPtr[bestStudent].printStudentInfo();
}

int Student_Staff::numberOfUndergrad() {
	int undergradNumber = 0;
	
	for (int i = 0; i < studentNumber; i++) {
		if (studentPtr[i].getProgram() == 'B') {
			undergradNumber++;
		}
	}

	return undergradNumber;
}

void Student_Staff::sameHireYear(int yearHiredInput) {
	
	std::cout << "The following Employees were hired in " << yearHiredInput << ":\n";

	for (int i = 0; i < staffNumber; i++) {

		int startPosition = staffPtr[i].getDateOfHire().size() - 4;    // For use in subtr()

		std::string yearHiredStr = staffPtr[i].getDateOfHire().substr(startPosition);    // Extracts the last 4 characters of the dateOfHire string attribute in staff to compare to year input.

		int yearHired = std::stoi(yearHiredStr);

		if (yearHired ==  yearHiredInput) {
			std::cout << staffPtr[i].getEmployeeFirstName() << " " << staffPtr[i].getEmployeeLastName() << std::endl;
		}
	}
}