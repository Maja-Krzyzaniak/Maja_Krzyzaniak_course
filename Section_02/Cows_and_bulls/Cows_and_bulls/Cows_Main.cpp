#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetguessAndPrintBack();

//the entry point of our application
int main()
{
	PrintIntro();
	
	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS =5;
	for (int count = 1; count <=NUMBER_OF_TURNS; count++)
	{
		GetguessAndPrintBack();
		cout << endl;
	}

	return 0;
}
void PrintIntro()
{
	//introduce the game
	constexpr int WORLD_LENGHT = 9;
	cout << "Welcome to bulls and cows.\n";
	cout << "Can you guess " << WORLD_LENGHT;
	cout << " letter I'm thinking of?\n";
	cout << endl;
	return ;
}
string GetguessAndPrintBack()
{
	//get a quess from the player
	cout << "Enter your guess ";
	string Guess = "";
	getline(cin, Guess);

	//print the quess back
	cout << "Your guess was " << Guess << endl;
	return Guess;
}