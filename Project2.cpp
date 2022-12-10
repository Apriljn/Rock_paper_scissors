//Rock Paper Scissors Lizard Spock (The Big Bang Theory)

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	cout << "====================\n";
	cout << "rock paper scissors!\n";
	cout << "====================\n";

	char ans = 'N';
	do {
		srand(time(NULL));
		int computer = rand() % 3 + 1;
		int user = 0;
		cout << "1) Rock\n";
		cout << "2) Paper\n";
		cout << "3) Scissors\n";

		cout << "shoot! ";

		cin >> user;

		if (user == 1 && computer == 1) {
			cout << "Draw :)\n";
			cout << "Let's do it again :)\n";
		}
		else if (user == 1 && computer == 2) {
			cout << "I win!\n";
			cout << "Let's do it again :)\n";
		}
		else if (user == 1 && computer == 3) {
			cout << "You're a winner!\n";
			cout << "Let's do it one more time :)\n";
		}
		else if (user == 2 && computer == 1) {
			cout << "You're a winner!\n";
			cout << "Let's do it one more time :)\n";
		}
		else if (user == 2 && computer == 2) {
			cout << "Draw :)\n";
			cout << "Let's do it again :)\n";
		}
		else if (user == 2 && computer == 3) {
			cout << "I win!\n";
			cout << "Let's do it again :)\n";
		}
		else if (user == 3 && computer == 1) {
			cout << "I win!\n";
			cout << "Let's do it again :)\n";
		}
		else if (user == 3 && computer == 2) {
			cout << "You're a winner!\n";
			cout << "Let's do it one more time :)\n";
		}
		else if (user == 3 && computer == 3) {
			cout << "Draw :)\n";
			cout << "Let's do it again :)\n";
		}

		cout << "====================\n";
		cout << "Do you want to continue (Y/N)?\n";
		cout << "You must type a 'Y' or an 'N' :";
		cin >> ans;

		cout << "====================\n";

	} while ((ans == 'Y') || (ans == 'y'));
}

