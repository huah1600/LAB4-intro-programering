#include <iostream>
#include <string>

// Define name_x_times() below:
 void name_x_times(std::string name , int x ) 
{ // definition
	
	while(0 < x){

		std::cout << "The Name " << name << " mean somthing" << "\n";
		x--;
	}

}

int main() {

	std::string my_name = "hussen!";
	int some_number = 5; // Change this if you like!
	// Call name_x_times() below with my_name and some_number
	name_x_times(my_name, some_number); //arguments ( some_number, my_name )
	std::cin.get();

}
