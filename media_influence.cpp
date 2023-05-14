# include <iostream>
# include <chrono>
# include <thread>
# include <random>


// function to reduce syntax for input
inline std::string input(std::string msg){
	std::string inp; // to store the input
	
	// asking user for the input
	std::cout << msg;
	std::cin >> inp;
	
	// returning the input
	return inp;
}

// method to slowly print a text
inline void slowPrint(std::string text, int speed = 50){
   // iterating through the string
   for(auto t : text){
   	// printing a character and flushing the stream
   	std::cout << t << std::flush;
   	// sleeping the program
   	std::this_thread::sleep_for(std::chrono::milliseconds(speed));
   }
}

// method to upload a video in the site
void upload(){
	// asking for video details
	std::string title = input("Enter your video title: ");
	std::string thumbnail = input("Enter your thumbnail link: ");
	std::string desc = input("Enter the video description: ");
	// processing and uploading the video
	std::cout << "Uploading";
	slowPrint("...........", 250);
	std::cout << "\nSuccessfully uploaded your video.";	
}

// analysing viewer's account details'
void analyze(){
	// variable declaration
	std::random_device rd;
	std::mt19937 mt(rd());
	int watch_perc, views, comments, likes, shares, followers;
	
	// retrieving the account details
	watch_perc = mt() % 100 + 1;
	views = mt() % 1000;
	comments = mt() % 10 + 1;
	likes = mt() % 1000;
	shares = mt() % 75000;
	followers = mt() % 10;
	
	// printing the details
	std::cout << "\nWatch Percentage: " << watch_perc << "%";
	std::cout << "\nViews: " << views << "k";
	std::cout << "\nComments: " << comments << "k";
	std::cout << "\nLikes: " << likes << "k";
	std::cout << "\nShares: " << shares;
	std::cout << "\nFollowers: " << followers << " million.";
}

// execution starts from here
int main(int argc, char** argv){
	int choice; // stores user choice
	std::cout << "DILLUSIONERS INSTAGRAM";	
	
	do{
		// printing menu and getting user choice
		std::cout << "\n\nChoose any of the following options:\n";
		std::cout << "1. Create Content\n2. Analyze All Time Vidoes\n3. Exit\n";
		choice = std::stoi(input(">> "));
		std::cout << '\n';
		
		switch(choice){
			case 3:{ // exit
				break;
			}
			
			case 2:{ // analyze content
				analyze();
				break;	
			}
			
			case 1:{ // creating new content
				upload();
				break;
			}
		}
	} while(choice != 3);
	return 0;
}
