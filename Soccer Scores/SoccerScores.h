#include <iostream>
using namespace std;
#ifndef SOCCERSCORES_H
#define SOCCERSCORES_H

class SoccerScores
{
private:
	string playerName;
	int playerNum;
	int playerScore;
public:
	SoccerScores();
	SoccerScores(string theName, int theNumber, int theScore);
	void setSoccerScores(string theName, int theNumber, int theScore);
	void setPlayerName(string theName);
	void setPlayerNum(int theNumber);
	void setPlayerScore(int theScore);
	string getPlayerName() const;
	int getPlayerNum() const;
	int getPlayerScore() const;
	void display() const;
};
#endif
