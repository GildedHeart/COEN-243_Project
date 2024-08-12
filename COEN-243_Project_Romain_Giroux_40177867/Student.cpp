   #include<iostream>
#include<string>
#include<fstream>
#include "Student.h"


// Constructors

Student::Student() {
	studentFirstName = "";
	studentLastName = "";
	studentId = "";
	dateOfBirth = "";

	gpa = 0.0;
	completedCredits = 0.0;

	startYear = 0;

	program = NULL;
}

Student::Student(std::string studentFirstNameInput,
	std::string studentLastNameInput,
	std::string studentIdInput,
	std::string dateOfBirthInput,

	double gpaInput,
	double completedCreditsInput,

	int startYearInput,
	
	char programInput)

	:

	studentFirstName(studentFirstNameInput),
	studentLastName(studentLastNameInput),
	studentId(studentIdInput),
	dateOfBirth(dateOfBirthInput),

	gpa(gpaInput),
	completedCredits(completedCreditsInput),

	startYear(startYearInput),
		
	program(programInput) {}


// Destructor

Student::~Student() {}

// Getters

std::string Student::getStudentFirstName() { return studentFirstName; }
std::string Student::getStudentLastName() { return studentLastName; }
std::string Student::getStudentId() { return studentId; }
std::string Student::getDateOfBirth() { return dateOfBirth; }

char Student::getProgram() { return program; }


double Student::getGpa() { return gpa; }
double Student::getCompletedCredits() { return completedCredits; }

int Student::getStartYear() { return startYear; }

// Setters

void Student::setStudentFirstName(std::string studentFirstNameInput) { studentFirstName = studentFirstNameInput; }

void Student::setStudentLastName(std::string studentLastNameInput) { studentLastName = studentLastNameInput; }
void Student::setStudentId(std::string studentIdInput) { studentId = studentIdInput; }
void Student::setDateOfBirth(std::string dateOfBirthInput) { dateOfBirth = dateOfBirthInput; }

void Student::setProgram(char programInput) { program = programInput; }
	
void Student::setGpa(double gpaInput) { gpa = gpaInput; }
void Student::setCompletedCredits(double completedCreditsInput) { completedCredits = completedCreditsInput; }

void Student::setStartYear(int startYearInput) { startYear = startYearInput; }
  
// Member functions

bool Student::completeProgram() {
	switch (program)
	{
	case 'b':
	case 'B':
		if (completedCredits >= 130.0) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 'm':
	case 'M':
		if (completedCredits >= 16.0) {
			return true;
		}
		else {
			return false;
		}
		break;

	case 'p':
	case 'P':
		if (completedCredits >= 12.0) {
			return true;
		}
		else {
			return false;
		}
		break;

	default:
		return false;
		break;
	}
}

std::string Student::studentStatus() {
	if (gpa >= 3.5) {
		return "A+";
	}
	else if (gpa >= 3.0) {
		return "A";
	 }
	else if(gpa >= 2.5) {
		return "B";
	}
	else if (gpa >= 2) {
		return "C";
	}
	else {
		return "D";
	}
}

void Student::printStudentInfo() {
	std::cout << "Student's first name: " << studentFirstName << std::endl
		<< "Student's last name: " << studentLastName << std::endl
		<< "Student's ID: " << studentId << std::endl
		<< "Student's date of birth: " << dateOfBirth << std::endl << std::endl
		<< "Student's GPA: " << gpa << std::endl
		<< "Year student started: " << startYear << std::endl
		<< "Number of credits completed: " << completedCredits << std::endl
		<< "Program type: " << program << std::endl;	
}