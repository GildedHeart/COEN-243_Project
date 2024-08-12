#pragma once
class Student
{
private:

	std::string studentFirstName;
	std::string studentLastName;
	std::string studentId;
	std::string dateOfBirth;

	double gpa;
	double completedCredits;

	int startYear;

	char program;

public:

	// Constructors

	Student();

	Student(std::string studentFirstNameInput,
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

	~Student() {}

	// Getters

	std::string getStudentFirstName();
	std::string getStudentLastName();
	std::string getStudentId();
	std::string getDateOfBirth();
	
	char getProgram();

	double getGpa();
	double getCompletedCredits();

	int getStartYear();

	// Setters

	void setStudentFirstName(std::string studentFirstNameInput);
	void setStudentLastName(std::string studentLastNameInput);
	void setStudentId(std::string studentIdInput);
	void setDateOfBirth(std::string dateOfBirthInput);
	
	void setProgram(char programInput);

	void setGpa(double gpaInput);
	void setCompletedCredits(double completedCreditsInput);

	void setStartYear(int startYearInput);

	// Member functions

	bool completeProgram();

	std::string studentStatus();

	void printStudentInfo();

};

