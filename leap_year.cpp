# include <iostream>


// execution starts from here
int main(int argc, char** argv){
	int year; // stores the year
	
	// asking user for the input
	std::cout << "Enter the year: ";
	std::cin >> year;
	
	// determines whether the year is leap or not.
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) std::cout << "It is a leap year.";
	else std::cout << "It is not a leap year.";
	return 0;
}
