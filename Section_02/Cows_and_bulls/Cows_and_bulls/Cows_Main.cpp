#include <iostream>
#include <string>
using namespace std;
int main() {
	//introduce the game
	constexpr int WORLD_LENGHT = 8;
	cout << "Welcome to bulls and cows" << endl;
	cout << "Can you guess " << WORLD_LENGHT;
	cout << " letter I'm thinking of?\n";
	cout << endl;

	//get a quess from the player
	cout << "Enter your guess";
	string Guess = "";
	cin >> Guess;
	cout << endl;
	//repeat the quess back to them

	system("pause");
	return 0;
}