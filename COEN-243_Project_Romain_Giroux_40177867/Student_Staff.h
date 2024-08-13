#pragma once
class Student_Staff
{
private:

	Student *studentPtr;

	int studentNumber;    // Wasn't specified in the assignment attributes, but it work well to have it here for the other functions.

	Staff* staffPtr;

	int staffNumber;     // Wasn't specified in the assignment attributes, but it work well to have it here for the other functions.

public:

	// Constructors

	Student_Staff();

	// Destructor

	~Student_Staff() {};

	// Member functions

	void highestGpa();    // The Project only has a single array of students that belong to the class in which this function is defined.
					      // The outline of the function asks for us to use the array defined in the class as a parameter, which doesn't make sense.
	                      // I used the pointer defined in the attributes instead.

	int numberOfUndergrad();    // This function had similar issues to the one above.

	void sameHireYear(int yearHiredInput);    // Similar issues as the ones described above.

};

