#include <String>
#pragma once
using namespace System;
ref class Card
{
public:
	Card();

public:
	int cardValue;
	int aCardValue;
	String^ suit;
	String^ img_loc;
	bool hasBeenUsed;
};

