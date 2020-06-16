/**
 * @file test_getCardVal.cpp
 * @brief getCardVal -> returns the present card number after drawing a number of cards 
 * @function cards::get_card_val()
 * @return an integer value of the current count of the cards drawn
 */

#include <iostream>
#include <gtest/gtest.h>

#include "../src/cards.h"

namespace 
{
	TEST(getCurCardNum, test_1)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		cards temp = cards_deck->deal_card();
		int after = cards_deck->get_cur_card_number();

		ASSERT_NE(before, after);
	}

	TEST(getCurCardNum, test_2)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		int after = cards_deck->get_cur_card_number();

		ASSERT_EQ(before, after);
	}

	TEST(getCurCardNum, test_3)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		cards_deck->shuffle();
		int after = cards_deck->get_cur_card_number();

		ASSERT_EQ(before, after);
	}

	TEST(getCurCardNum, test_4)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		cards_deck->shuffle();
		cards temp = cards_deck->deal_card();
		int after = cards_deck->get_cur_card_number();

		ASSERT_NE(before, after);
	}

	TEST(getCurCardNum, test_5)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<2; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 2);
	}

	TEST(getCurCardNum, test_6)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<12; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 12);
	}	

	TEST(getCurCardNum, test_7)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<22; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 22);
	}

	TEST(getCurCardNum, test_8)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<32; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 32);
	}

	TEST(getCurCardNum, test_9)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<42; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 42);
	}

	TEST(getCurCardNum, test_10)
	{
		std::unique_ptr<cardsDeck> cards_deck(new cardsDeck);
		int before = cards_deck->get_cur_card_number();
		for (int i=0; i<52; i++)
		{
			cards temp = cards_deck->deal_card();
		}

		ASSERT_NE(before, 52);
	}
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	
	return RUN_ALL_TESTS();
}