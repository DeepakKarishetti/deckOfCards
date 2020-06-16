/**
 * @brief deal_card -> member function used to return one card from the deck for each call made
 * @return -> returns a card with information containing its face value/rank and its suit name
 * @note -> essentially testing for the number of cards removed from the deck
 */

#include <iostream>
#include <gtest/gtest.h>

#include "../src/cards.h"

namespace 
{
	TEST(deal_card, test_1)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		cards temp = cards_deck->deal_card();
		int after = cards_deck->get_cur_card_number();

		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_2)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<2; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_3)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<12; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_4)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<22; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_5)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<32; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_6)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<42; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_7)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<52; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		int after = cards_deck->get_cur_card_number();
		
		ASSERT_NE(before, after);
	}

	TEST(deal_card, test_8)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<62; i++)
		{
			cards temp = cards_deck->deal_card();
		}
		
		ASSERT_EQ(before, 0);
	}
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}