/**
 * @file main.cpp
 * @brief main source file that performs the overall algorithm of dealing a deck of cards
 */

/// ***************
//! MAIN FUNCTION |
/// ***************

#include <limits>

/// main header file include
#include "cards.hpp"

int main(int argc, char** argv)
{
	/// unique pointer to initialize a pointer to t
	std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);

	/*std::cout << "\n\n----------Before shuffling----------\n\n";
	cards_deck->print_deck();*/

	/// calling the shuffle function to randomly shuffle the deck of cards
	cards_deck->shuffle();

	/*std::cout << "\n\n----------After shuffling---------- \n\n";
	cards_deck->print_deck();*/

	int caller; /// count on the deal_card calls made by the caller
	std::cout << std::endl << "Enter number of deal_card calls to make: ";
	std::cin >> caller;
	std::cout << std::endl;
	
	while (true)
	{

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input given, please enter a finite positive integer!" <<std::endl;
			std::cout << std::endl << "Enter number of deal_card calls to make: ";

			std::cin >> caller;
		}

		for (int i=0; i<caller; i++)
		{	
			if (cards_deck->get_cur_card_number() < DECK)
			{
				cards out_val = cards_deck->deal_card();
			  	std::cout << cards_deck->get_cur_card_number() << "   ";
			  	out_val.get_card_val();
			}
			else
			{
				std::cout << "\t No more cards to draw!" << std::endl;
			}
		}

		if (!std::cin.fail())
		{
			break;
		}
	}

  return 0;
}
