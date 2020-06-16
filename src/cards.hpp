#ifndef CARDS_HPP
#define CARDS_HPP

/**
 * @file cards.hpp
 * @brief contains all the class member functions definitions
 */

#include "cards.h"

/// class constructor, used to assign the information of a card (class setter function)
cards::cards(std::string rank, std::string suit)
{
	this->card_rank = rank;
	this->suit_name = suit;
}

/// member function used to obtain the information of each card (class getter function)
void cards::get_card_val()
{
	std::cout << "Card: " << this->card_rank << "\tof  ";
	std::cout << this->suit_name << std::endl;
}


/// member function used to populate an array with the different cards available in a standard deck of cards
cardsDeck::cardsDeck()
{
	/// the different face values of cards present in a standard deck 
	std::string card_rank[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

	/// the different suits present in a standard deck
	std::string card_suits[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};

	/// allocating a new array to hold all the different cards
	this->deck = new cards[DECK];

	/// initializing the current card value, increases as new cards are dealt and returned to the caller
	this->current_card = 0;
	
	/// placing the cards into the created array based on the rank and suit names
	for (int i=0; i<DECK; i++)
	{
		this->deck[i] = cards(card_rank[i % 13], card_suits[i / 13]); 
	}
}

/// destructor to delete the initialized array
cardsDeck::~cardsDeck()
{
	this->deck = nullptr;
	delete[] this->deck;
}

/// member function used to shuffle the deck of cards used before dealing to the caller
void cardsDeck::shuffle()
{
	this->current_card = 0;
	for (int i=0; i<DECK; i++)
	{
		int rand_val = (rand() + time(0)) % DECK;
		std::swap(this->deck[i], this->deck[rand_val]);
	}
}

/// member function used to visualize the deck of cards
void cardsDeck::print_deck()
{
	for (int i=0; i<DECK; i++)
	{
		(this->deck[i]).get_card_val();
	}
}

/// member function used to return a card for each call from the caller
cards cardsDeck::deal_card()
{
	return this->deck[this->current_card++];
}

/// member function used to obtain the count value of the current card based on the number of calls from the caller
int cardsDeck::get_cur_card_number()
{
	return this->current_card;
}

#endif /// CARDS_HPP