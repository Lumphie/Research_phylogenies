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


struct Card
{
	Cards::Rank rank;
	Cards::Suit suit;
};

// Generate a random number between min and max (inclusive)
int getRandomNumber(int min, int max)
{

	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
// prints a Card as a 2 character string (ex, Jack of Spades == "JS")
void printCard(const Card &card)
{
	// prints the corresponding rank
	switch (card.rank)
	{
	case Cards::RANK_2:			std::cout << '2'; break;
	case Cards::RANK_3:			std::cout << '3'; break;
	case Cards::RANK_4:			std::cout << '4'; break;
	case Cards::RANK_5:			std::cout << '5'; break;
	case Cards::RANK_6:			std::cout << '6'; break;
	case Cards::RANK_7:			std::cout << '7'; break;
	case Cards::RANK_8:			std::cout << '8'; break;
	case Cards::RANK_9:			std::cout << '9'; break;
	case Cards::RANK_10:		std::cout << "10"; break;
	case Cards::RANK_JACK:		std::cout << 'J'; break;
	case Cards::RANK_QUEEN:		std::cout << 'Q'; break;
	case Cards::RANK_KING:		std::cout << 'K'; break;
	case Cards::RANK_ACE:		std::cout << 'A'; break;
    case Cards::MAX_RANKS:
    default:
		std::cout << "There was no Rank";
	}

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
	}
	
}


// prints a complete deck of 52 cards.
void printDeck(const std::array<Card, 52> &deck)
{
	for (const auto &card : deck)
	{
		printCard(card);
			std::cout << ' ';
	}
	std::cout << '\n';
}

// swaps two cards
void swapCard(Card &a, Card &b)
{
	// Creates a temporary Card variable an initiates with Card a;

	Card temp = a;

	// swaps card a and b

	a = b;

	// gives b the temporary Card variable
	b = temp;
}


// shuffles a complete deck of cards of 52 cards.
void shuffleDeck(std::array<Card, 52> &deck)
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
int getCardValue(const Card &card)
{
	switch (card.rank)
	{
	case Cards::RANK_2:			return 2;
	case Cards::RANK_3:			return 3;
	case Cards::RANK_4:			return 4;
	case Cards::RANK_5:			return 5;
	case Cards::RANK_6:			return 6;
	case Cards::RANK_7:			return 7;
	case Cards::RANK_8:			return 8;
	case Cards::RANK_9:			return 9;
	case Cards::RANK_10:		return 10;
	case Cards::RANK_JACK:		return 10;
	case Cards::RANK_QUEEN:		return 10;
	case Cards::RANK_KING:		return 10;
	case Cards::RANK_ACE:		return 11;
    case Cards::MAX_RANKS:
    default:
        std::cout << "Error, rank not found. \n";
        return -1;
	}

	return 0;
}

bool playBlackJack(std::array<Card, 52> &deck)
{
	int dealerTotal = 0;
	int playerTotal = 0;
	int numAcesPlayer = 0;
	int numAcesDealer = 0;

	// points a pointer to the first card of the deck
	const Card *cardPtr = &deck[0];

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
	std::array<Card, 52> deck;

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
