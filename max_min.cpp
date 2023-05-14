# include <iostream>
# include <limits>

// function to reduce syntax for input
inline std::string input(std::string msg){
	std::string inp; // to store the input
	
	// asking user for the input
	std::cout << msg;
	std::cin >> inp;
	
	// returning the input
	return inp;
}

// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	int count = std::stoi(input("Enter the total numbers to be checked: ")), min, max, inp;
	
	std::cout << std::endl;
	// looping from 1 to the total count value
	for(int i = 1; i <= count; i++){
		// asking user for the number
		inp = std::stoi(input("Enter integer number " + std::to_string(i) + ": "));
		
		// if we are on the first iteration, the input becomes the min as well as max for now
		if(i == 1){
			min = inp;
			max = inp;
			continue;	
		}
		
		// calculating the min and max from the previous values to the input
		min = std::min(min, inp);
		max = std::max(max, inp);
	}
	std::cout << std::endl;
	
	// printint the result
	std::cout << "The maximum value is " << max << " and the minimum value is " << min;	
	return 0;
}
