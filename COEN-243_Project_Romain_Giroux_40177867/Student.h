#pragma once
class Student
{
private:

	std::string studentFirstName;
	std::string studentLastName;
	std::string studentId;
	std::string dateOfBirth;
	std::string programName;


	double gpa;
	double completedCredits;

	int startYear;



public:

	// Constructors

	Student();

	Student(std::string studentFirstNameInput,
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

		startYear(startYearInput) {};

	// Destructor

	~Student() {}

	// Getters

	std::string getStudentFirstName();
	std::string getStudentLastName();
	std::string getStudentId();
	std::string getDateOfBirth();
	std::string getProgramName();

	double getGpa();
	double getCompletedCredits();

	int getStartYear();

	// Setters

	void setStudentFirstName(std::string studentFirstNameInput);
	void setStudentLastName(std::string studentLastNameInput);
	void setStudentId(std::string studentIdInput);
	void setDateOfBirth(std::string dateOfBirthInput);
	void setProgramName(std::string programNameInput);

	void setGpa(double gpaInput);
	void setCompletedCredits(double completedCreditsInput);

	void setStartYear(int startYearInput);

	// Member functions

};

