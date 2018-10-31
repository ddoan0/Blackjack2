#include "Blackjackgame.h"

// constructor
Blackjackgame::Blackjackgame()
{
	p = gcnew Player();
	d = gcnew Deck();
	totalBetAmount = 0;
	p->money = 250;
}

void Blackjackgame::set_bet_amount(int betAmount) 
{
	// player has enough money to bet that amount
	if (p->money >= betAmount && betAmount > 0) 
	{
		p->money -= betAmount;
		totalBetAmount += betAmount;
	}
}


// this needs to initialize the game state elements
// dealer gets 2 cards. one face down other face up
// player gets 2 cards face up
void Blackjackgame::start_game()
{

}

// player gets one card. need to add check to make sure player has not bust yet or has not already held.
void Blackjackgame::hit()
{

}

// player stays and then the dealer plays
void Blackjackgame::stay()
{

}