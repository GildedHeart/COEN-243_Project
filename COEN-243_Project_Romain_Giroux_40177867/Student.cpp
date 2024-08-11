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
	programName = "";


	gpa = 0.0;
	completedCredits = 0.0;

	startYear = 0;
}

Student::Student(std::string studentFirstNameInput,
	std::string studentLastNameInput,
	std::string studentIdInput,
	std::string dateOfBirthInput,
	std::string programNameInput,


	double gpaInput,
	double completedCreditsInput,

	int startYearInput)

	:

	studentFirstName(studentFirstNameInput),
	studentLastName(studentLastNameInput),
	studentId(studentIdInput),
	dateOfBirth(dateOfBirthInput),
	programName(programNameInput),


	gpa(gpaInput),
	completedCredits(completedCreditsInput),

	startYear(startYearInput) {}


// Destructor

Student::~Student() {}

// Getters

std::string Student::getStudentFirstName() { return studentFirstName; }
std::string Student::getStudentLastName() { return studentLastName; }
std::string Student::getStudentId() { return studentId; }
std::string Student::getDateOfBirth() { return dateOfBirth; }
std::string Student::getProgramName() { return programName; }


double Student::getGpa() { return gpa; }
double Student::getCompletedCredits() { return completedCredits; }

int Student::getStartYear() { return startYear; }

// Setters

void Student::setStudentFirstName(std::string studentFirstNameInput) { studentFirstName = studentFirstNameInput; }

void Student::setStudentLastName(std::string studentLastNameInput) { studentLastName = studentLastNameInput; }
void Student::setStudentId(std::string studentIdInput) { studentId = studentIdInput; }
void Student::setDateOfBirth(std::string dateOfBirthInput) { dateOfBirth = dateOfBirthInput; }
void Student::setProgramName(std::string programNameInput) { programName = programNameInput; }
	
void Student::setGpa(double gpaInput) { gpa = gpaInput; }
void Student::setCompletedCredits(double completedCreditsInput) { completedCredits = completedCreditsInput; }

void Student::setStartYear(int startYearInput) { startYear = startYearInput; }

// Member functions


