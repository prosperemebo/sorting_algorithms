#ifndef DECK_HEADER
#define DECK_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Card Suit Enum
 *
 * An enumeration representing the different suits of a standard deck of cards.
 */
typedef enum kind_e
{
    SPADE = 0,   /**< Represents the Spades suit. */
    HEART,       /**< Represents the Hearts suit. */
    CLUB,        /**< Represents the Clubs suit. */
    DIAMOND      /**< Represents the Diamonds suit. */
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

/**
 * struct values_s - Structure representing card values
 *
 * @name: Name of the card value (e.g., "Ace", "Jack", "Queen", "King")
 * @val: Numeric value of the card (e.g., 1 for "Ace", 11 for "Jack", etc.)
 */
typedef struct values_s
{
	char *name;
	int val;
} values_t;

void print_deck(const deck_node_t *deck);
deck_node_t *init_deck(const card_t cards[52]);
void sort_deck(deck_node_t **deck);

#endif
