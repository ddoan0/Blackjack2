#pragma once
#include "Player.h"
#include "Deck.h"
#include <vector>

ref class Blackjackgame
{
// fields
public:
	int totalBetAmount;
	Player^ p;
	Deck^ d;

// methods
public:
	Blackjackgame();
	void set_bet_amount(int betAmount);
	void start_game();
	void hit();
	void stay();
};

