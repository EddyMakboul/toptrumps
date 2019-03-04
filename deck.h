// File : deck.h
#ifndef DECK_H
#define DECK_H

#include "card.h"
#include "cardlist.h"

typedef struct Deck {CardList list ;} Deck;

void deckInitEmpty(Deck *self);
bool deckIsEmpty(Deck *self);
void deckReadFromFile(Deck *self, char * fileName);
void deckShuffle(Deck *self);
Card * deckRemoveCard(Deck *self);
void deckClean(Deck * self);

#endif
