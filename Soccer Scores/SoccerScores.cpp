#include "SoccerScores.h"
#include <iomanip>

SoccerScores::SoccerScores() {
	setPlayerName(" ");
	setPlayerNum(0);
	setPlayerScore(0);

}

SoccerScores::SoccerScores(string theName, int theNumber, int theScore) {
	setPlayerName(theName);
	setPlayerNum(theNumber);
	setPlayerScore(theScore);
}

void SoccerScores::setSoccerScores(string theName, int theNumber, int theScore) {
	setPlayerName(theName);
	setPlayerNum(theNumber);
	setPlayerScore(theScore);
}

void SoccerScores::setPlayerName(string theName) {
	playerName = theName;
}

void SoccerScores::setPlayerNum(int theNumber) {
	playerNum = theNumber;
}

void SoccerScores::setPlayerScore(int theScore) {
	playerScore = theScore;
}

string SoccerScores::getPlayerName() const {
	return playerName;
}

int SoccerScores::getPlayerNum() const {
	return playerNum;
}

int SoccerScores::getPlayerScore() const {
	return playerScore;
}

void SoccerScores::display() const {
	cout << left << setw(15) << getPlayerName() << setw(8) << getPlayerNum();
	cout << setw(15) << getPlayerScore() << endl;

}