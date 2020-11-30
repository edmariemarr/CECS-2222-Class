#include "SoccerScores.h"
#include <iomanip>

void getData(SoccerScores arraySoccerScores[], int n);
void displayData(SoccerScores arraySoccerScores[], int n);

int main() {
	const int SIZE = 5; // size of the array
	SoccerScores arraySoccerScores[SIZE];
	int n = 4; // total number of players to receive input from

	getData(arraySoccerScores, n);
	displayData(arraySoccerScores, n);

	// Data output of the total sum of scores made by the team
	int totalTeamScore = 0;

	for (int i = 0; i <= n; i++) {
		totalTeamScore += arraySoccerScores[i].getPlayerScore();
	}

	cout << "The total team score is: " << totalTeamScore << endl;

	// Data output for the player with the highest score
	int max = arraySoccerScores[0].getPlayerScore();
	int j = 0;

	for (int i = 0; i <= n; i++) {
		if (max < arraySoccerScores[i].getPlayerScore()) {
			max = arraySoccerScores[i].getPlayerScore();
			j = i;
		}
	}

	cout << "The MVP with the top score of " << max << " is: " << endl;
	cout << "Name: " << arraySoccerScores[j].getPlayerName() << endl;
	cout << "Number: " << arraySoccerScores[j].getPlayerNum() << endl;

	system("pause");
	return 0;
}

void getData(SoccerScores arraySoccerScores[], int n) {
	string playerName;
	int playerNum, playerScore;

	for (int i = 1; i <= n; i++) {
		cout << "Enter player #" << i << " name: " << endl;
		cin >> playerName;
		cout << "Enter player #" << i << " number: " << endl;
		cin >> playerNum;
		if (playerNum < 0) {
			cout << "Error. Enter a positive number: " << endl;
			cin >> playerNum;
		}
		cout << "Enter player #" << i << " score: " << endl;
		cin >> playerScore;
		if (playerScore < 0) {
			cout << "Error. Enter a positive number: " << endl;
			cin >> playerScore;
		}
		arraySoccerScores[i].setSoccerScores(playerName, playerNum, playerScore);
	}
}

void displayData(SoccerScores arraySoccerScores[], int n) {
	cout << left << setw(15) << "Player Name: " << setw(8) << "Number: ";
	cout << setw(15) << "Score: " << endl;

	for (int i = 1; i <= n; i++) {
		arraySoccerScores[i].display();
	}

}