#pragma once
#include "Player.h"
#include "Deck.h"
#include <vector>


ref class Blackjackgame
{
// fields
public:
	int totalBetAmount;
	Player^ player;
	Player^ dealer;
	Deck^ d;

// methods
public:
	Blackjackgame();
	void set_bet_amount(int betAmount);
	int getTotalBetAmount();
	void start_game();
	void startAnotherRound();
	String^ hit(Player^ *);
	void stay();
	void checkAces(Player^ *);
	String^ winnerIsDetermined(Player^ *, Player^ *);
};

