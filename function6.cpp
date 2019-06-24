
#include<iostream>
#include<string>
                //        
void my_name(std::string husse) {

	std::cout << "Are your name " << husse << "\n"; //  Defintion


}

int main()
{

	std::string name = "husse";


	my_name(name);// calling the function,thats your power.


	std::cin.get();

	return 0;
}
