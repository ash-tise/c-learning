#include <stdio.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define DECK_SIZE 52

typedef struct {
    char *suit;
    char *rank;
} Card;

void initializeDeck(Card deck[]) {
    char *suits[NUM_SUITS] = {"Hearts", "Diamonds", "Spades", "Clubs"};
    char *ranks[NUM_RANKS] = {"2","3","4","5","6","7","8","9","10","Jack", "Queen", "King", "Ace"};

    int index = 0;
    for (int suit = 0; suit < NUM_SUITS; suit++) {
        for (int rank = 0; rank < NUM_RANKS; rank++) {
            deck[index].suit = suits[suit];
            deck[index].rank = ranks[rank];
            index++;
        }
    }
}

void printDeck(const Card deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        printf("%s of %s\n", deck[i].rank, deck[i].suit);
    }
}

int main() {

    Card deck[DECK_SIZE];

    initializeDeck(deck);

    printDeck(deck);

    return 0;
}