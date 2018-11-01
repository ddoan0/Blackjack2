#pragma once
ref class Player
{
private:
	int money;
	int numOfAces;
	int totalCardValue;
	int cardPos1, cardPos2;

public:
	Player(int);
	void Bet(int wager);
	void resetPlayer(int);
	int getPlayerMoney();
	void setPlayerMoney(int);
	int getNumOfAces();
	void incNumOfAces(int);
	int getTotalCardValue();
	void setTotalCardValue(int);
};

