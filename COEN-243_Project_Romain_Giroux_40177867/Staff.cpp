#include<iostream>
#include<string>
#include<fstream>
#include "Student.h"
#include "Staff.h"

// Constructors

Staff::Staff() {
	employeeFirstName = "";
	employeeLastName = "";
	employeeId = "";
	dateOfHiring = "";

	bonusCode = NULL;

	currentSalary = 0.0;
}

Staff::Staff(std::string employeeFirstNameInput,
	std::string employeeLastNameInput,
	std::string employeeIdInput,
	std::string dateOfHiringInput,

	char bonusCodeInput,

	double currentSalaryInput)

	:

	employeeFirstName(employeeFirstNameInput),
	employeeLastName(employeeLastNameInput),
	employeeId(employeeIdInput),
	dateOfHiring(dateOfHiringInput),

	bonusCode(bonusCodeInput),

	currentSalary(currentSalaryInput) {}


// Destructor

Staff::~Staff() {}

// Getters

std::string Staff::getEmployeeFirstName() { return employeeFirstName; }
std::string Staff::getEmployeeLastName() { return employeeLastName; }
std::string Staff::getEmployeeId() { return employeeId; }
std::string Staff::getDateOfHiring() { return dateOfHiring; }

char Staff::getBonusCode() { return bonusCode; }

double Staff::getCurrentSalary() { return currentSalary; }

// Setters

void Staff::setEmployeeFirstName(std::string employeeFirstNameInput) { employeeFirstName = employeeFirstNameInput; }
void Staff::setEmployeeLastName(std::string employeeLastNameInput) { employeeLastName = employeeLastNameInput; }
void Staff::setEmployeeId(std::string employeeIdInput) { employeeId = employeeIdInput; }
void Staff::setDateOfHiring(std::string dateOfHiringInput) { dateOfHiring = dateOfHiringInput; }
	 
void Staff::setBonusCode(char bonusCodeInput) { bonusCode = bonusCodeInput; }
	 
void Staff::setCurrentSalary(double currentSalaryInput) { currentSalary = currentSalaryInput; }

// Member functions



