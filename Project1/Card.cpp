#include "Card.h"

Card::Card()
{
	// no default values for the card fields. they will be initialized by the deck
	// hasBeenUsed is a flag to make sure duplicate cards are not used
	hasBeenUsed = false;
}
