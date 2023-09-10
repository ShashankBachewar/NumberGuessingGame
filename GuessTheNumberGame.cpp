#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void attempts(vector<int> list) 
{
  cout << endl;
  cout << "Here is the history of your attempts for this game!\n";

	for (int i = 0; i < list.size(); i++)
	{
	  cout << list[i] << endl;
	}
	 cout << "It took you " << list.size() << " attempts to get the right answer.\n";
}


void playGame()
{
	vector<int> guesses;

	srand( (unsigned int) time(NULL) );
	int randomNumber = (rand() % 100) +1;
	
	cout << "-- GUESSING THE NUMBER --" << endl << "A random number between 0 and 100 is generated, guess it!"  <<endl;

	int guess = 20;

	while (guess != randomNumber)
	{
		cin >> guess;
		guesses.push_back(guess);

		if (guess == randomNumber)
		{
			cout << "--> Congratulations! You win :)\n\n";
			attempts(guesses);
		}
		else if (guess < randomNumber)
		{
		  cout << "--> Too low!";
		}
		else
		{
		  cout << "--> Too high!";
		}
	}
}


int main()
{
	int choice;

	do
	{
		cout << "Welcome!\n1. Play Game\n2. Quit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Let's play!\n\n";
			playGame();
			break;
		case 2:
			cout << "Sad to see you go..";
			break;
		}
	} 
	while (choice != 2);
}


 
