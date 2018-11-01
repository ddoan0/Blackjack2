#include "Player.h"

Player::Player(int startingMoney)
{
	money = startingMoney;
	numOfAces = 0;
	totalCardValue = 0;
}

int Player::getPlayerMoney()
{
	return money;
}

void Player::setPlayerMoney(int amount)
{
	money = amount;
}

int Player::getNumOfAces()
{
	return numOfAces;
}

// Used for ace dual values (1 or 11)
void Player::incNumOfAces(int x)
{
	numOfAces += x;
}

// The bet method returns the amount to add to the pot total money
void Player::Bet(int wager)
{
	// check to see if the player has enough money to bet
	if (wager <= money)
	{
		money -= wager;
	}
}

void Player::resetPlayer(int initialValue)
{
	money = initialValue;
	numOfAces = 0;
	totalCardValue = 0;
}

int Player::getTotalCardValue()
{
	return totalCardValue;
}

void Player::setTotalCardValue(int cardValue)
{
	totalCardValue = cardValue;
}