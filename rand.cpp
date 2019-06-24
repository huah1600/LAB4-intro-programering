#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main()
{
  // Generate a lottery
  srand(time(0));
  int lottery = rand() % 100;

  // Prompt the user to enter a guess
  cout << "Enter your lottery pick (two digits): ";
  int guess;
  cin >> guess;

  // Check the guess
  if (guess  == lottery)
    cout << "Exact match: you win $10,000" << endl;
  else if (guess % 10 == lottery / 10
      && guess / 10 == lottery % 10)
    cout << "Match all digits: you win $3,000" << endl;
  else if (guess % 10 == lottery / 10 || guess % 10 == lottery % 10
      || guess / 10 == lottery / 10 || guess / 10 == lottery % 10)
    cout << "Match one digit: you win $1,000" << endl;
  else
    cout << "Sorry, no match" << endl;

  return 0;
}
