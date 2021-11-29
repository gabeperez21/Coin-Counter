// Programming Quiz Fall 2021
// This program will accept the first letter of a coin to add it to the coin count.
// The program will not accept anything but letters. If you input a valid coin like P for 
// penny, the program will add it to a total and print out the total to the monitor
// everything you add another coin.
// Programmer: Gabriel Perez

#include <iostream>
using namespace std;

char getLetter();
int findCoinValue(char x); 

int main() {
	system("Color 1F");
	system("Title Programming Quiz Fall 2021    -- simplified coin total by Gabriel Perez");

	char coin;
	int total = 0;

	cout << "  ***    Simplifed Coin Count Quiz -- Fall 2021 by Gabriel Perez";

	while (true) {
		cout << "\n\n What coin did you get? ";
		coin = getLetter();

		if (coin >= 'a' && coin <= 'z')  
			coin += 'A' - 'a'; 

		total += findCoinValue(coin); 

		cout << "  **  " << "\'" << coin << "\':     " << "coin value:   " << findCoinValue(coin)
			<< "c       current total: " << total << "c"
			<< " or $" << total / 100 << " and " << total % 100 << "c";
		
		cout << "\n\n             *****************\n";
	}
	return 0;
}

char getLetter() {
	char coin;

	cin >> coin; cin.ignore(100, '\n');

	while (coin < 'A' || coin > 'Z' && coin < 'a' || coin > 'z')
	{
		cout << "\'" << coin << "\'" << " is a "
			<< (coin >= '0' && coin <= '9' ? "DIGIT" : "SPECIAL SYMBOL") 
			<< " Please enter a LETTER: ";

		cin >> coin; cin.ignore(100, '\n');
	}
	return coin;
}

int findCoinValue(char x) {
	switch (x) {
	case 'p':
	case 'P': return 1;
	case 'n':
	case 'N': return 5;
	case 'd':
	case 'D': return 10;
	case 'q':
	case 'Q': return 25;
	case 'h':
	case 'H': return 50;
	default: return 0;
	}
}