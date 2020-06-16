#ifndef CARDS_H
#define CARDS_H

/** 
 * @file cards.h
 * @brief contains the main class and its corresponding member functions declarations
 */

/// Std includes
#include <iostream>
#include <memory>

/// const size of array to hold a standard deck if cards
#define DECK 52

/**
 * @brief class -> defined to hold the information regarding a single card
 * @param card_rank -> is the face value of each card with 13 different ranks in each suit: Ace,0,1,....,10,Jack,Queen,King
 * @param suit_name -> there are four suit names used: clubs, diamonds, hearts and spades
 */
class cards
{
private:
	std::string card_rank; /// 13 ranks in each suit
	std::string suit_name; /// 4 suits

public:
	/**
	 * @brief cards -> an empty/default class constructor
	 */
	cards() {};

	/**
	 * @brief cards -> constructor used to initialize and store data regarding each card
	 * @param rank -> face value of the card
	 * @param suit -> the suit name of the card with the given face value
	 */
	cards(std::string rank, std::string suit);

	/**
	 * @brief get_card_val -> member function used to obtain the information in each card
	 * @note -> displays the output on the screen when called
	 * @return -> no output value returned
	 */
	void get_card_val();
};

/**
 * @brief cardsDeck -> class that holds all the functionality to populate, shuffle and deal the cards from a std deck
 * @param deck -> a pointer to the array used to initialize the deck of cards
 * @param current_card -> hold the count value of the current card
 */
class cardsDeck : public cards
{
private:
	cards* deck; /// array with 52 cards
	int current_card; /// count value
public:
	/**
	 * @brief cardsDeck -> class constructor that initializes and populates an array with 52 different cards
	 * @note -> the initialized deck is then used for further operations
	 * @return -> no output value returned
	 */
	cardsDeck();

	/**
	 * @brief ~cardsDeck -> class destructor that destroys the initialized array when it goes out of scope
	 * @return -> no output value returned
	 */
	~cardsDeck();

	/**
	 * @brief shuffle -> member function used to randomply shuffle the given deck of cards
	 * @note -> uses a random number generator for shuffling the deck of cards
	 * @return -> no output value returned
	 */
	void shuffle();

	/**
	 * @brief print_deck -> member function used to visualize the deck of cards
	 * @return -> displays the info on screen, no output value returned
	 */
	void print_deck();

	/**
	 * @brief deal_card -> member function used to return one card from the deck for each call made
	 * @return -> returns a card with information containing its face value/rank and its suit name
	 */
	cards deal_card();

	/**
	 * @brief get_curr_card_number -> member function used to get the count value of a card
	 * @return -> return an integer value between 0 and 52 of the card
	 */
	int get_cur_card_number();
};

#include "cards.hpp"
#endif /// CARDS_H