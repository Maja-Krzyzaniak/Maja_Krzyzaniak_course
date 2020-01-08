#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

void PlayGame()
{
	// loop for the number of turns asking for guesses	
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
{

		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
}
	
}
string GetGuess()
{
	//get a quess from the player
	cout << "Enter your guess ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	return false;
}

void PrintIntro()
{
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << std::endl;
	std::cout << "          }   {         ___ " << std::endl;
	std::cout << "          (o o)        (o o) " << std::endl;
	std::cout << "   /-------\\ /          \\ /-------\\ " << std::endl;
	std::cout << "  / | BULL |O            O| COW  | \\ " << std::endl;
	std::cout << " *  |-,--- |              |------|  * " << std::endl;
	std::cout << "    ^      ^              ^      ^ " << std::endl;
	std::cout << " Can you guess a letter I'm thinking of?\n";
	std::cout << std::endl;
}

//the entry point of our application
int main()
{
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	system("pause");
	return 0;// exit the application
}

	