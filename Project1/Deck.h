#pragma once
#include "Card.h"
#include <vector>
ref class Deck
{
public:
	Deck();
	void shuffle();
	void populate();
	bool cardHasBeenDrawn(int);
	void resetDeck();
	bool deckHasBeenReset();

public:
	const int deckSize = 52;
	// All 52 cards. first digit is the first letter of the suit. 2nd digit is the num/face
	array<Card^>^ deck;
	array<String^>^ suitsTotal;
};

