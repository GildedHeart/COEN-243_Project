#include<iostream>
#include<string>
#include<array>
#include "Student.h"
#include "Staff.h"

// Constructors

Staff::Staff() {
	employeeFirstName = "";
	employeeLastName = "";
	employeeId = "";
	dateOfHire = "";

	bonusCode = NULL;

	currentSalary = 0.0;
}

// Destructor

Staff::~Staff() {}

// Getters

std::string Staff::getEmployeeFirstName() { return employeeFirstName; }
std::string Staff::getEmployeeLastName() { return employeeLastName; }
std::string Staff::getEmployeeId() { return employeeId; }
std::string Staff::getDateOfHire() { return dateOfHire; }

char Staff::getBonusCode() { return bonusCode; }

double Staff::getCurrentSalary() { return currentSalary; }

// Setters

void Staff::setEmployeeFirstName(std::string employeeFirstNameInput) { employeeFirstName = employeeFirstNameInput; }
void Staff::setEmployeeLastName(std::string employeeLastNameInput) { employeeLastName = employeeLastNameInput; }
void Staff::setEmployeeId(std::string employeeIdInput) { employeeId = employeeIdInput; }
void Staff::setDateOfHire(std::string dateOfHireInput) { dateOfHire = dateOfHireInput; }
	 
void Staff::setBonusCode(char bonusCodeInput) { bonusCode = bonusCodeInput; }
	 
void Staff::setCurrentSalary(double currentSalaryInput) { currentSalary = currentSalaryInput; }

// Member functions

void Staff::printStaffInfo() {
	std::cout << "Employee's first name: " << employeeFirstName << std::endl
		<< "Employee's last name: " << employeeLastName << std::endl
		<< "Employee's ID: " << employeeId << std::endl
		<< "Year employee was hired: " << dateOfHire << std::endl
		<< "Employee's bonus code: " << bonusCode << std::endl
		<< "Employee's current pre-bonus salary: " << currentSalary << std::endl;
}

double Staff::calculateSalary() {
		switch (bonusCode)
		{

		case 'a':
		case 'A':

			return currentSalary * 1.08;

			break;

		case 'b':
		case 'B':

			return currentSalary * 1.06;

			break;

		case 'c':
		case 'C':

			return currentSalary * 1.03;

				break;

		case 'd':
		case 'D':

			return currentSalary * 1.01;

			break;

		default:

			return currentSalary;

			break;
		}
	}



