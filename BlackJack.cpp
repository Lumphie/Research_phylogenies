#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <cstdlib>
#include <ctime>


namespace Cards
{
	enum Rank
	{
		RANK_2,
		RANK_3,
		RANK_4,
		RANK_5,
		RANK_6,
		RANK_7,
		RANK_8,
		RANK_9,
		RANK_10,
		RANK_JACK,
		RANK_QUEEN,
		RANK_KING,
		RANK_ACE,
		MAX_RANKS
	};



	enum Suit
	{
		SUIT_CLUB,
		SUIT_DIAMOND,
		SUIT_HEART,
		SUIT_SPADE,
		MAX_SUITS
	};
}

struct CardStruct

{
	Cards::Rank rank;
	Cards::Suit suit;
};

struct RankStruct
{
    Cards::Rank rank;
    std::string stringRank;
    int intRank;
};

static RankStruct rankArray[] {
    {Cards::RANK_2, "2", 2},
    {Cards::RANK_3, "3", 3},
    {Cards::RANK_4, "4", 4},
    {Cards::RANK_5, "5", 5},
    {Cards::RANK_6, "6", 6},
    {Cards::RANK_7, "7", 7},
    {Cards::RANK_8, "8", 8},
    {Cards::RANK_9, "9", 9},
    {Cards::RANK_10, "10", 10},
    {Cards::RANK_JACK, "J", 10},
    {Cards::RANK_QUEEN, "Q", 10},
    {Cards::RANK_KING, "K", 10},
    {Cards::RANK_ACE, "A", 11},
    {Cards::MAX_RANKS, "E", -1}

};

// Generate a random number between min and max (inclusive)
int getRandomNumber(int min, int max)
{
    // static used for efficiency, so we only calculate this value once
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
// prints a Card as a 2 character string (ex, Jack of Spades == "JS")
void printCard(const CardStruct &card){
	// prints the corresponding rank
    bool noBreak = true;
    for (auto &cardNum : rankArray)
    {
        if (cardNum.rank == card.rank)
        {
            std::cout << cardNum.stringRank;
            noBreak = false;
            break;
        }
    }
    if (noBreak)
    std::cout << "There was no Rank ";


	// prints the corresponding suit
	switch (card.suit)
	{
	case Cards::SUIT_CLUB:		std::cout << 'C'; break;
	case Cards::SUIT_DIAMOND:	std::cout << 'D'; break;
	case Cards::SUIT_HEART:		std::cout << 'H'; break;
	case Cards::SUIT_SPADE:		std::cout << 'S'; break;
    case Cards::MAX_SUITS:
    default:
		std::cout << "There was no Suit";
        break;
	}
}

// prints a complete deck of 52 cards.
void printDeck(const std::array<CardStruct, 52> &deck)
{
	for (const auto &card : deck)
	{
		printCard(card);
			std::cout << ' ';
	}
	std::cout << '\n';
}

// swaps two cards
void swapCard(CardStruct &a, CardStruct &b)
{
	// Creates a temporary Card variable an initiates with Card a;

    CardStruct temp = a;

	// swaps card a and b

	a = b;

	// gives b the temporary Card variable
	b = temp;
}


// shuffles a complete deck of cards of 52 cards.
void shuffleDeck(std::array<CardStruct, 52> &deck)
{
	// Step through each card in the deck
	for (int index = 0; index < 52; ++index)
	{
		// Pick a random card, any card
		int swapIndex = getRandomNumber(0, 51);
		// Swap it with the current card
		swapCard(deck[index], deck[swapIndex]);
	}
}
// Returns the value of a card
int getCardValue(const CardStruct &card)
{
    for (auto &cardNum : rankArray)
    {
        if (cardNum.rank == card.rank)
            return cardNum.intRank;
    }
        std::cout << "Error, rank not found. \n";
        return -1;
	}

bool playBlackJack(std::array<CardStruct, 52> &deck)
{
	int dealerTotal = 0;
	int playerTotal = 0;
	int numAcesPlayer = 0;
	int numAcesDealer = 0;

	// points a pointer to the first card of the deck
    const CardStruct *cardPtr = &deck[0];

	// dealer gets a card
	dealerTotal += getCardValue(*cardPtr);
	if (getCardValue(*cardPtr) == 11)
		++numAcesDealer;

	std::cout << "Dealer drew a ";
	printCard(*cardPtr++);
	std::cout << " and has a total of " << dealerTotal << "\n \n";

	//player gets two cards
	for (int index = 0; index < 2; ++index)
	{
		playerTotal += getCardValue(*cardPtr);
		if (getCardValue(*cardPtr) == 11)
			++numAcesPlayer;
		std::cout << "You drew a ";
		printCard(*cardPtr++);
		std::cout << " and have a total of " << playerTotal << "\n \n";
	}

	std::string input;

	// Gives the player the choice to hit or stand
	// until the player stands or has a total larger than 21 (and loses)
	while (true) {
		std::cout << "\ntype 'h' to hit or 's' to stand ";
		std::cin >> input;
		std::cout << "\n";
		if (input == "s")
			break;

		if (input == "h"){
			playerTotal += getCardValue(*cardPtr);
			if (playerTotal > 21){
				if (numAcesPlayer != 0){
					--numAcesPlayer;
					playerTotal -= 10;
				}
			}

			std::cout << "You drew a ";
			printCard(*cardPtr++);
			std::cout << " and have a total of " << playerTotal << '\n';
		}

		// Makes the player lose
		if (playerTotal > 21)
			return false;
	} 

	// When the player stands the dealer starts getting cards until he has more than 21 (player wins)
	// or more than 17 but less than 22 (player loses)
	if (input == "s")
	{
		do {
			dealerTotal += getCardValue(*cardPtr);
			

			if (dealerTotal > 21)
			{
				if (numAcesDealer != 0)
				{
					--numAcesDealer;
					dealerTotal -= 10;
				}
			}

			std::cout << "Dealer drew a ";
			printCard(*cardPtr++);
			std::cout << " and has a total of " << dealerTotal << "\n \n";

			if (dealerTotal > 21)
				return true;
		} while (dealerTotal < 17 && numAcesDealer == 0 && dealerTotal < playerTotal);
	}

	// if in the end the player has more points than the dealer he wins!
	if (playerTotal > dealerTotal)
		return true;
	else
		return false;
}

int main()
{
	// Creates a random shuffled deck
	srand(static_cast<unsigned int> (time(0)));
	rand();
    std::array<CardStruct, 52> deck;

	int card = 0;
	for (int suit = 0; suit < Cards::MAX_SUITS; ++suit)
		for (int rank = 0; rank < Cards::MAX_RANKS; ++rank)
		{
			deck[card].suit = static_cast<Cards::Suit>(suit);
			deck[card].rank = static_cast<Cards::Rank>(rank);
			++card;
		}
	
	bool keepPlaying = true;
	std::string input;
	
	//lets the player play blackjack until he wants to quit.
	do
	{

		std::cout << "Let's play a game of Black Jack! \n \n";
		shuffleDeck(deck);
		if (playBlackJack(deck))
		{
			std::cout << "\nCongratulations! you won! \n \n";
		}
		else
		{
			std::cout <<"\nYou Lost! \n" << "Better luck next time! \n \n";
		}

		std::cout << "Want to play another round?" << '\n' <<
		"Type 'y' to play again and 'n' to quit. ";
		std::cin >> input;
		std::cout << '\n';
		
		if (input == "y")
			keepPlaying = true;
		if (input == "n")
		{
			keepPlaying = false;
			std::cout << "Thanks for playing! \n";
		}
	} while (keepPlaying);
	

	return 0;
}
