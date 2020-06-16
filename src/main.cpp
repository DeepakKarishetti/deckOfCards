/**
 * @file main.cpp
 * @brief main source file that performs the overall algorithm of dealing a deck of cards
 * @date June 16, 2020
 * @author Deepak R Karishetti
 * 
 * 
 * @note
 *
 * - File descriptions:
 *     - main.cpp -> top level file that runs the algorithm
 *	   - cards.h -> contains the high level data abstraction with declaration of function prototypes
 *     - cards.hpp -> contains the corresponding functions definitions		
 *     
 * - Inputs:
 *     - User input with integer values when prompted on the command line/terminal
 *     - The input values must be positive, denoting the number of cards to be drawn from the deck
 *     - If a value other than an integer is given, it will be warned with a prompt to reenter the value 
 *
 * - Outputs:
 *     - The cards drawn from the deck is printed to display on the terminal screen
 *     - Lines 41-42 & 47-48 can be uncommented to see how the cards are initialized and shuffled, before being drawn by user calls
 * 
 * 
 ********************************************************************************************************************/

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
	std::cout << std::endl << "Enter number of cards to be drawn: ";
	std::cin >> caller;
	std::cout << std::endl;
	
	while (true)
	{
		/// Check if valid integer inputs are given by the user
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input given, please enter a finite positive integer!" <<std::endl;
			std::cout << std::endl << "Enter number of deal_card calls to make: ";

			std::cin >> caller;
		}
		/// Draw cards based on the user input calls
		for (int i=0; i<caller; i++)
		{	
			if (cards_deck->get_cur_card_number() < DECK)
			{
				/// display the output of the cards drawn
				cards out_val = cards_deck->deal_card();
			  	std::cout << cards_deck->get_cur_card_number() << "   ";
			  	out_val.get_card_val();
			}
			else
			{
				std::cout << "\t No more cards to draw!" << std::endl;
			}
		}
		/// break out of loop
		if (!std::cin.fail())
		{
			break;
		}
	}

  return 0;
}
