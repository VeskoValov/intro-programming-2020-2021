#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL)); // Random number generator
	int answer = (rand() % 100) + 1;
	int guess, counter = 0;
	cout << "Guess a number between 1 and 100: ";
	do { // Loop for input of the guesses while the answer is still not guessed
		cin >> guess;
		if (guess <= 0 || guess > 100) { // Condition that checks if the entered number is in the correct range
			cout << "Please enter a correct guess: ";
			continue;
		}
		counter++; // Counter that counts the number of guesses
		if (guess < answer) { // Condition that checks if the guessed number is smaller than the answer and returns a help text
			cout << "Try with a higher number: ";
		}
		else if (guess > answer) { // Condition that checks if the guessed number is bigger than the answer and returns a help text
			cout << "Try with a smaller number: ";
		}
	} 
	while (guess != answer);
	cout << "Congrats it took you " << counter << " attempts!" << endl; // Returns the count of guesses made
	return 0;
}
