#pragma once
class Staff
{
private:

	std::string employeeFirstName;
	std::string employeeLastName;
	std::string employeeId;
	std::string dateOfHire;

	char bonusCode;

	double currentSalary;

public:

	// Constructors

	Staff();

	Staff(std::string employeeFirstNameInput,
		std::string employeeLastNameInput,
		std::string employeeIdInput,
		std::string dateOfHireInput,

		char bonusCodeInput,

		double currentSalaryInput)

		:

		employeeFirstName(employeeFirstNameInput),
		employeeLastName(employeeLastNameInput),
		employeeId(employeeIdInput),
		dateOfHire(dateOfHireInput),

		bonusCode(bonusCodeInput),

		currentSalary(currentSalaryInput) {};

	// Destructor

	~Staff();

	// Getters

	std::string getEmployeeFirstName();
	std::string getEmployeeLastName();
	std::string getEmployeeId();
	std::string getDateOfHire();

	char getBonusCode();

	double getCurrentSalary();

	// Setters

	void setEmployeeFirstName(std::string employeeFirstNameInput);
	void setEmployeeLastName(std::string employeeLastNameInput);
	void setEmployeeId(std::string employeeIdInput);
	void setDateOfHire(std::string dateOfHireInput);

	void setBonusCode(char bonusCodeInput);

	void setCurrentSalary(double currentSalaryInput);

	// Member functions

	void printStaffInfo();

	double calculateSalary();

};

