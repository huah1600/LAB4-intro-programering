#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool sortA1()
{

	ifstream input;
	std:int A1;
	int A2 =0;
	int temp=0;
	input.open("A1.txt");

	if (!input) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}



	

		 while (input >> A1) {
			
			 if (A2 <= A1) {
				 temp = A2;
				 A2 = A1;
				 A1 = temp;


				 continue;
				 

			 }
			 else
			 {
				 std::cout << "A1 = " << "not sorted." << "\n";
				 return false;
			 }

		 }
		
	
	  std::cout << "A1 =" << " sorted." << "\n";
		 return true;
	
}
bool sortA()
{

	ifstream input;
std:int A1;
	int A2 = 0;
	int temp = 0;
	input.open("A.txt");

	if (!input) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}



	

	while (input >> A1) {

		if (A2 <= A1) {
			temp = A2;
			A2 = A1;
			A1 = temp;


			continue;


		}
		else
		{
			std::cout << "A = " << "not sorted." << "\n";
			return false;
		}

	}


	std::cout << "A =" << " sorted." << "\n";
	return true;

}
bool sortB()
{

	ifstream input;
std:int A1;
	int A2 = 0;
	int temp = 0;
	input.open("B.txt");

	if (!input) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}





	while (input >> A1) {

		if (A2 <= A1) {
			temp = A2;
			A2 = A1;
			A1 = temp;


			continue;


		}
		else
		{
			std::cout << "B = " << "not sorted." << "\n";
			return false;
		}

	}


	std::cout << "B =" << " sorted." << "\n";
	return true;

}



void merge() {

	ifstream A, B;
	ofstream c;
	int a;
	int b;
	int temp = 0;
	A.open("A.txt");
	B.open("B.txt");
	c.open("C.txt");
	A >> a;
	B >> b;
	if (!A && !B) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}

	while (!A.eof() && !B.eof()) {
		

			if (a <= b) {
			
				c << a << ' ';
				A >> a;
			
			}
			else 
			{
				c << b<<' ';
				B >> b;
			}

			
		

	}

	while(!A.eof()) {
		c << a << ' ';
		A >> a;
	}                            //Du kan köra if else statement också
	while(!B.eof()) {
		c << b << ' ';
		B >> a;
	}


}

